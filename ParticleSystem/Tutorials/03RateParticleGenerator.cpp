// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowAdapter.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGLineParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGRateParticleGenerator.h>

#include <OpenSG/Dynamics/OSGDataConverter.h>
#include <OpenSG/Dynamics/OSGCompoundFunction.h>
#include <OpenSG/Dynamics/OSGLineDistribution3D.h>
#include <OpenSG/Dynamics/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/Dynamics/OSGDiscDistribution3D.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

bool ExitApp = false;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

FunctionPtr createPositionDistribution(void);
FunctionPtr createLifespanDistribution(void);
FunctionPtr createVelocityDistribution(void);

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           ExitApp = true;
       }
   }

   virtual void keyReleased(const KeyEvent& e)
   {

   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

class TutorialWindowListener : public WindowAdapter
{
public:
    virtual void windowClosing(const WindowEvent& e)
    {
        ExitApp = true;
    }

    virtual void windowClosed(const WindowEvent& e)
    {
        ExitApp = true;
    }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
    }
    virtual void mouseEntered(const MouseEvent& e)
    {
    }
    virtual void mouseExited(const MouseEvent& e)
    {
    }
    virtual void mousePressed(const MouseEvent& e)
    {
            mgr->mouseButtonPress(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
    virtual void mouseReleased(const MouseEvent& e)
    {
           mgr->mouseButtonRelease(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }

    virtual void mouseDragged(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }
};
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

	beginEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
		TutorialWindowEventProducer->setUseCallbackForDraw(true);
		TutorialWindowEventProducer->setUseCallbackForReshape(true);
	endEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
    TutorialWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "OpenSG 03RateParticleGenerator Window");
										

	//Particle System Material
	PointChunkPtr PSPointChunk = PointChunk::create();
	beginEditCP(PSPointChunk);
		PSPointChunk->setSize(5.0f);
		PSPointChunk->setSmooth(true);
	endEditCP(PSPointChunk);
	BlendChunkPtr PSBlendChunk = BlendChunk::create();
	PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

	MaterialChunkPtr PSMaterialChunkChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunkChunk);
		PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunkChunk);

	ChunkMaterialPtr PSMaterial = ChunkMaterial::create();
	beginEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);
		PSMaterial->addChunk(PSPointChunk);
		PSMaterial->addChunk(PSMaterialChunkChunk);
		PSMaterial->addChunk(PSBlendChunk);
	endEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);

	//Particle System
    ParticleSystemPtr ExampleParticleSystem = osg::ParticleSystem::create();
		ExampleParticleSystem->addParticle(Pnt3f(0,0,0),
			Vec3f(0.0,0.0f,1.0f),
			Color4f(1.0,1.0,1.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			5, 
			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f)
			,0);
		ExampleParticleSystem->addParticle(Pnt3f(100,100,100),
			Vec3f(0.0,0.0f,1.0f),
			Color4f(1.0,1.0,1.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			5, 
			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f)
			,0);
    ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//Particle System Drawer
	LineParticleSystemDrawerPtr ExampleParticleSystemDrawer = osg::LineParticleSystemDrawer::create();
	beginEditCP(ExampleParticleSystemDrawer);
		ExampleParticleSystemDrawer->setLineDirectionSource(LineParticleSystemDrawer::DIRECTION_VELOCITY);
		ExampleParticleSystemDrawer->setLineLengthSource(LineParticleSystemDrawer::LENGTH_STATIC);
		ExampleParticleSystemDrawer->setLineLength(0.1);
	endEditCP(ExampleParticleSystemDrawer);
		

	//Create a Rate Particle Generator
	RateParticleGeneratorPtr ExampleGenerator = osg::RateParticleGenerator::create();

	//Attach the function objects to the Generator
	beginEditCP(ExampleGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
		ExampleGenerator->setPositionFunction(createPositionDistribution());
		ExampleGenerator->setLifespanFunction(createLifespanDistribution());
		ExampleGenerator->setGenerationRate(100.0);
		ExampleGenerator->setVelocityFunction(createVelocityDistribution());
	endEditCP(ExampleGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
	
	//Attach the Generator to the Particle System
	beginEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask);
		ExampleParticleSystem->getGenerators().push_back(ExampleGenerator);
	endEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask);


	//Particle System Node
    ParticleSystemCorePtr ParticleNodeCore = osg::ParticleSystemCore::create();
    beginEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
		ParticleNodeCore->setSystem(ExampleParticleSystem);
		ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
		ParticleNodeCore->setMaterial(PSMaterial);
    endEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
    
	NodePtr ParticleNode = osg::Node::create();
    beginEditCP(ParticleNode, Node::CoreFieldMask);
        ParticleNode->setCore(ParticleNodeCore);
    endEditCP(ParticleNode, Node::CoreFieldMask);


    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();


    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}


// Callback functions


// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}

FunctionPtr createPositionDistribution(void)
{
     //Disc Distribution
    DiscDistribution3DPtr TheDiscDistribution = DiscDistribution3D::create();
    beginEditCP(TheDiscDistribution);
      TheDiscDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheDiscDistribution->setInnerRadius(10.0);
      TheDiscDistribution->setOuterRadius(200.0);
      TheDiscDistribution->setMinTheta(0.0);
      TheDiscDistribution->setMaxTheta(6.283185307);
      TheDiscDistribution->setNormal(Vec3f(1.0,0.0,0.0));
      TheDiscDistribution->setSurfaceOrEdge(DiscDistribution3D::SURFACE);
    endEditCP(TheDiscDistribution);


    return TheDiscDistribution;
}

FunctionPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(50.0f);
      TheLifespanDistribution->setStandardDeviation(3.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

FunctionPtr createVelocityDistribution(void)
{
   Pnt3f pt1 = (0.0,0.0,100.0);
   Pnt3f pt2 = (0.0,0.0,110.0);

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
 		TheLineDistribution->setPoint1(pt1);
		TheLineDistribution->setPoint2(pt2);
    endEditCP(TheLineDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheVelocityDistribution = CompoundFunction::create();
	beginEditCP(TheVelocityDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheLineDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheVelocityDistribution);

    return TheVelocityDistribution;
}