// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGImageFileHandler.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGPointParticleSystemDrawer.h>

#include <OpenSG/ParticleSystem/OSGSphereDistribution3D.h>
#include <OpenSG/ParticleSystem/OSGQuadParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGQuadParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGBurstParticleGenerator.h>


#include <OpenSG/ParticleSystem/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/ParticleSystem/OSGCylinderDistribution3D.h>
#include <OpenSG/ParticleSystem/OSGLineDistribution3D.h>
//#include <OpenSG/ParticleSystem/OSGSizeDistribution3D.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);
void ClickToGenerate(const MouseEventPtr e);

Distribution3DPtr createPositionDistribution(void);
Distribution1DPtr createLifespanDistribution(void);
Distribution3DPtr createVelocityDistribution(void);
Distribution3DPtr createAccelerationDistribution(void);
Distribution3DPtr createSizeDistribution(void);



ParticleSystemPtr ExampleParticleSystem;
QuadParticleSystemDrawerPtr ExampleParticleSystemDrawer;
BurstParticleGeneratorPtr ExampleBurstGenerator;


// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEventPtr e)
   {
       if(e->getKey() == KeyEvent::KEY_Q && e->getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
            TutorialWindowEventProducer->closeWindow();
       }

	   if(e->getKey() == KeyEvent::KEY_B)//generate particles when clicked
	   {
		  //Attach the Generator to the Particle System
				beginEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask);
					ExampleParticleSystem->getGenerators().push_back(ExampleBurstGenerator);
				endEditCP(ExampleParticleSystem, ParticleSystem::GeneratorsFieldMask);
	   }
   }

   virtual void keyReleased(const KeyEventPtr e)
   {
   }

   virtual void keyTyped(const KeyEventPtr e)
   {
	   UInt32 CHANGE_SOURCE;
	   if(e->getKey()== KeyEvent::KEY_P)
	   {
		   
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_POSITION_CHANGE;
	   }
		
	   else if(e->getKey()== KeyEvent::KEY_C)
	   {
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_VELOCITY_CHANGE;
	   }

	    else if(e->getKey()== KeyEvent::KEY_V)
	   {
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_VELOCITY;
	   }
	   
	    else if(e->getKey()== KeyEvent::KEY_A)
	   {
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_ACCELERATION;
	   }
	   
	   else  if(e->getKey()== KeyEvent::KEY_N)
	   {
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_PARTICLE_NORMAL;
	   }
	   
	    else if(e->getKey()== KeyEvent::KEY_D)
	   {
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_VIEW_POSITION;
	   }
	   
	    else if(e->getKey()== KeyEvent::KEY_S)
	   {
		   CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_STATIC;
	   }

	   else  if(e->getKey()== KeyEvent::KEY_W)
	   {
			CHANGE_SOURCE = QuadParticleSystemDrawer::NORMAL_VIEW_DIRECTION;
	   }
	   else {
		   return;
			}
	beginEditCP(ExampleParticleSystemDrawer);
		ExampleParticleSystemDrawer->setNormalSource(CHANGE_SOURCE);
	endEditCP(ExampleParticleSystemDrawer);

   }
};

void ClickToGenerate(const MouseEventPtr e)
{
	

}

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEventPtr e)
    {
		if(e->getButton()== MouseEvent::BUTTON1)
		{

			
		}

		if(e->getButton()== MouseEvent::BUTTON3)
		{

		}

    }
    virtual void mouseEntered(const MouseEventPtr e)
    {
    }
    virtual void mouseExited(const MouseEventPtr e)
    {
    }
    virtual void mousePressed(const MouseEventPtr e)
    {
            mgr->mouseButtonPress(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
    virtual void mouseReleased(const MouseEventPtr e)
    {
           mgr->mouseButtonRelease(e->getButton(), e->getLocation().x(), e->getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }

    virtual void mouseDragged(const MouseEventPtr e)
    {
            mgr->mouseMove(e->getLocation().x(), e->getLocation().y());
    }
};
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

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
	
	//Particle System Material
	TextureChunkPtr QuadTextureChunk = TextureChunk::create();
    ImagePtr LoadedImage = ImageFileHandler::the().read("Data/Cloud.png");    
    beginEditCP(QuadTextureChunk, TextureChunk::ImageFieldMask | TextureChunk::EnvModeFieldMask);
        QuadTextureChunk->setImage(LoadedImage);
		QuadTextureChunk->setEnvMode(GL_MODULATE);
    endEditCP(QuadTextureChunk, TextureChunk::ImageFieldMask | TextureChunk::EnvModeFieldMask);

	BlendChunkPtr PSBlendChunk = BlendChunk::create();
	beginEditCP(PSBlendChunk);
		PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
		PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);
	endEditCP(PSBlendChunk);

	MaterialChunkPtr PSMaterialChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunk);
		PSMaterialChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunk);

	ChunkMaterialPtr PSMaterial = ChunkMaterial::create();
	beginEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);
		PSMaterial->addChunk(QuadTextureChunk);
		PSMaterial->addChunk(PSMaterialChunk);
		PSMaterial->addChunk(PSBlendChunk);
	endEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);



	//Particle System
		
    ExampleParticleSystem = osg::ParticleSystem::create();
	ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//Particle System Drawer
	 ExampleParticleSystemDrawer = osg::QuadParticleSystemDrawer::create();
	

	 ExampleBurstGenerator = osg::BurstParticleGenerator::create();
	//Attach the function objects to the Generator
	beginEditCP(ExampleBurstGenerator, BurstParticleGenerator::PositionDistributionFieldMask | BurstParticleGenerator::LifespanDistributionFieldMask | BurstParticleGenerator::SizeDistributionFieldMask);
		ExampleBurstGenerator->setPositionDistribution(createPositionDistribution());
		//ExampleBurstGenerator->setLifespanDistribution(createLifespanDistribution());
		ExampleBurstGenerator->setBurstAmount(50.0);
		ExampleBurstGenerator->setVelocityDistribution(createVelocityDistribution());
		ExampleBurstGenerator->setAccelerationDistribution(createAccelerationDistribution());
		ExampleBurstGenerator->setSizeDistribution(createSizeDistribution());
	endEditCP(ExampleBurstGenerator, BurstParticleGenerator::PositionDistributionFieldMask | BurstParticleGenerator::LifespanDistributionFieldMask | BurstParticleGenerator::SizeDistributionFieldMask);
	
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

	//Ground Node
	NodePtr GoundNode = makePlane(30.0,30.0,10,10);

	Matrix GroundTransformation;
	GroundTransformation.setRotate(Quaternion(Vec3f(1.0f,0.0,0.0), -3.14195f));
	TransformPtr GroundTransformCore = Transform::create();
    beginEditCP(GroundTransformCore, Transform::MatrixFieldMask);
		GroundTransformCore->setMatrix(GroundTransformation);
    endEditCP(GroundTransformCore, Transform::MatrixFieldMask);

	NodePtr GroundTransformNode = Node::create();
	beginEditCP(GroundTransformNode, Node::CoreFieldMask | Node::ChildrenFieldMask);
		GroundTransformNode->setCore(GroundTransformCore);
        GroundTransformNode->addChild(GoundNode);
	endEditCP(GroundTransformNode, Node::CoreFieldMask | Node::ChildrenFieldMask);


    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
        scene->addChild(GroundTransformNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();


    //Open Window
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,
            WinSize,
            "05QuadParticleDrawer");

    //Enter main Loop
    TutorialWindowEventProducer->mainLoop();
    
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

Distribution3DPtr createPositionDistribution(void)
{
	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(0.0);
      TheSphereDistribution->setOuterRadius(3.0);
      TheSphereDistribution->setMinTheta(0.0);
      TheSphereDistribution->setMaxTheta(6.283185);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}

Distribution3DPtr createVelocityDistribution(void)
{
   

	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,1.0));
      TheSphereDistribution->setInnerRadius(5.0);
      TheSphereDistribution->setOuterRadius(15.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(0.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::VOLUME);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}



Distribution1DPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(10.0f);
      TheLifespanDistribution->setStandardDeviation(2.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

Distribution3DPtr createAccelerationDistribution(void)
{

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,-3.0));
	  TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,-3.0));
    endEditCP(TheLineDistribution);

    return TheLineDistribution;
}

Distribution3DPtr createSizeDistribution(void)
{
	 //Line Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.2,0.2,1.0));
	  TheLineDistribution->setPoint2(Pnt3f(1.0,1.0,1.0));
    endEditCP(TheLineDistribution);

	return TheLineDistribution;
}
