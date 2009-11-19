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
#include <OpenSG/ParticleSystem/OSGParticleCollisionListener.h>
#include <OpenSG/Toolbox/OSGMathUtils.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGImageFileHandler.h>

#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGSceneFileHandler.h>

#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGNodeParticleSystemCore.h>

#include <OpenSG/ParticleSystem/OSGPointParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGLineParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGQuadParticleSystemDrawer.h>

#include <OpenSG/ParticleSystem/OSGAgeFadeParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGAgeSizeParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGDistanceKillParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGCollectiveGravityParticleSystemAffector.h>
#include <OpenSG/ParticleSystem/OSGGeometryCollisionParticleSystemAffector.h>

#include <OpenSG/ParticleSystem/OSGRateParticleGenerator.h>
#include <OpenSG/ParticleSystem/OSGBurstParticleGenerator.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemListener.h>

#include <OpenSG/ParticleSystem/OSGLineDistribution3D.h>
#include <OpenSG/ParticleSystem/OSGCylinderDistribution3D.h>
#include <OpenSG/ParticleSystem/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/ParticleSystem/OSGDiscDistribution3D.h>
#include <OpenSG/ParticleSystem/OSGSphereDistribution3D.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
WindowEventProducerPtr TutorialWindowEventProducer;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

//Particle System Drawer

QuadParticleSystemDrawerPtr SmokeParticleSystemDrawer;
PointParticleSystemDrawerPtr ExampleShrapnelParticleSystemDrawer;
PointParticleSystemDrawerPtr ExampleFireballParticleSystemDrawer;

ParticleSystemPtr RocketParticleSystem;
ParticleSystemPtr SmokeParticleSystem;
ParticleSystemPtr ShrapnelParticleSystem;
ParticleSystemPtr FireballParticleSystem;
ParticleSystemPtr HouseParticleSystem;


BurstParticleGeneratorPtr ShrapnelBurstGenerator;
RateParticleGeneratorPtr SmokeGenerator;
BurstParticleGeneratorPtr FireballGenerator;

AgeFadeParticleAffectorPtr SmokeAgeFadeParticleAffector;
AgeSizeParticleAffectorPtr SmokeAgeSizeParticleAffector;
AgeSizeParticleAffectorPtr FireballAgeSizeParticleAffector;
ParticleSystemCorePtr PointParticleNodeCore;

Distribution3DPtr FireballPositionDistribution;
Distribution3DPtr ShrapnelPositionDistribution;
Distribution3DPtr SmokePositionDistribution;

Distribution3DPtr createPositionDistribution(void);
Distribution1DPtr createLifespanDistribution(void);
Distribution3DPtr createVelocityDistribution(void);

Distribution3DPtr createSmokeVelocityDistribution(void);
Distribution1DPtr createSmokeLifespanDistribution(void);
Distribution3DPtr createSmokePositionDistribution(void);

Distribution3DPtr createShrapnelPositionDistribution(void);
Distribution3DPtr createShrapnelAccelerationDistribution(void);
Distribution3DPtr createShrapnelVelocityDistribution(void);

Distribution3DPtr createFireballVelocityDistribution(void);
Distribution3DPtr createFireballPositionDistribution(void);
Distribution3DPtr createFireballAccelerationDistribution(void);
Distribution1DPtr createFireballLifespanDistribution(void);



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
		 
	   }
   }

   virtual void keyReleased(const KeyEventPtr e)
   {
   }

   virtual void keyTyped(const KeyEventPtr e)
   {
	   if(e->getKey()== KeyEvent::KEY_1) // Use the Point Drawer
	   {
			
	   }

   }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEventPtr e)
    {
    }
    virtual void mouseEntered(const MouseEventPtr e)
    {
    }
    virtual void mouseExited(const MouseEventPtr e)
    {
    }
    virtual void mousePressed(const MouseEventPtr e)
    {
		if(WindowEventProducer::Ptr::dcast(e->getSource())->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
		{
            mgr->mouseButtonPress(e->getButton(), e->getLocation().x(), e->getLocation().y());
		}
		else
		{
          Line TheRay;
			if(e->getButton() == MouseEvent::BUTTON1)
			{
				
				mgr->getCamera()->calcViewRay(TheRay,e->getLocation().x(),e->getLocation().y(),*(mgr->getWindow()->getPort(0)));
				std::cout<<"Velocity "<<TheRay.getDirection()<<std::endl;
			}
			RocketParticleSystem->addParticle(TheRay.getPosition(),
			Vec3f(0.0,1.0f,0.0f),
			Color4f(1.0,0.0,0.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			10, 
			Vec3f(TheRay.getDirection()*50), //Velocity
			Vec3f(0.0f,0.0f,0.0f)
											  );
		}
    }
    virtual void mouseReleased(const MouseEventPtr e)
    {
		if(WindowEventProducer::Ptr::dcast(e->getSource())->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
		{
           mgr->mouseButtonRelease(e->getButton(), e->getLocation().x(), e->getLocation().y());
		}
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

class TutorialRocketParticleSystemListener : public ParticleSystemListener
{
  public:
   virtual void systemUpdated(const ParticleSystemEventPtr e)
   {
   }

   virtual void particleGenerated(const ParticleEventPtr e) 
   {
   }
   
   virtual void volumeChanged(const ParticleSystemEventPtr e)
   {
   }

   virtual void particleKilled(const ParticleEventPtr e)
   {
    beginEditCP(FireballPositionDistribution);
		SphereDistribution3D::Ptr::dcast(FireballPositionDistribution)->setCenter(e->getParticlePosition());
    endEditCP(FireballPositionDistribution);

	beginEditCP(ShrapnelPositionDistribution);
		SphereDistribution3D::Ptr::dcast(ShrapnelPositionDistribution)->setCenter(e->getParticlePosition());
    endEditCP(ShrapnelPositionDistribution);

	beginEditCP(SmokePositionDistribution);
		DiscDistribution3D::Ptr::dcast(SmokePositionDistribution)->setCenter(e->getParticlePosition());
    endEditCP(SmokePositionDistribution);
	
	   
	  // if()
	   {

		    //Attach the Generator to the Shrapnel Particle System
				beginEditCP(ShrapnelParticleSystem, ParticleSystem::GeneratorsFieldMask);
					ShrapnelParticleSystem->getGenerators().push_back(ShrapnelBurstGenerator);
				endEditCP(ShrapnelParticleSystem, ParticleSystem::GeneratorsFieldMask);
		
		//Attach the Affector to the Smoke Particle System
				beginEditCP(SmokeParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);
					SmokeParticleSystem->getGenerators().push_back(SmokeGenerator);
					SmokeParticleSystem->getAffectors().push_back(SmokeAgeFadeParticleAffector);
					SmokeParticleSystem->getAffectors().push_back(SmokeAgeSizeParticleAffector);
				endEditCP(SmokeParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);
		
		//Attach the Affector to the fireball Particle System
				beginEditCP(FireballParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);
					FireballParticleSystem->getGenerators().push_back(FireballGenerator);
					FireballParticleSystem->getAffectors().push_back(FireballAgeSizeParticleAffector);
				endEditCP(FireballParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);

	   }
	   std::cout << "Rocket Died at: " << e->getParticlePosition() << std::endl;
   }
   virtual void particleStolen(const ParticleEventPtr e)
   {
   }
};

class TutorialParticleCollisionListener : public ParticleGeometryCollisionListener
{
   virtual void particleCollision(const ParticleGeometryCollisionEventPtr ColE)
   {
       ParticleSystemPtr TheSystem= ColE->getSystem();
       UInt32 ParticleIndex(ColE->getParticleIndex());

       
	   Real32 phi= osgacos((-TheSystem->getVelocity(ParticleIndex).dot(ColE->getHitNormal()))/(TheSystem->getVelocity(ParticleIndex).length()*ColE->getHitNormal().length()));
	   
	   if( phi < deg2rad(80.0) )
	   {
           TheSystem->killParticle(ParticleIndex);
	   }
	   else
	   {
			//Reflect the Particle
		   Vec3f Reflect(reflect(TheSystem->getVelocity(ParticleIndex), ColE->getHitNormal()));
		   TheSystem->setVelocity(Reflect, ParticleIndex);
		   TheSystem->setPosition(ColE->getHitPoint() + (0.00001f*Reflect), ParticleIndex);
	   }
	  
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
		//point material
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

	ChunkMaterialPtr PSPointMaterial = ChunkMaterial::create();
	beginEditCP(PSPointMaterial, ChunkMaterial::ChunksFieldMask);
		PSPointMaterial->addChunk(PSPointChunk);
		PSPointMaterial->addChunk(PSMaterialChunkChunk);
		PSPointMaterial->addChunk(PSBlendChunk);
	endEditCP(PSPointMaterial, ChunkMaterial::ChunksFieldMask);

		//smoke material
	TextureChunkPtr QuadTextureChunk = TextureChunk::create();
    ImagePtr LoadedImage = ImageFileHandler::the().read("Data/Checker.jpg");    
    beginEditCP(QuadTextureChunk, TextureChunk::ImageFieldMask);
        QuadTextureChunk->setImage(LoadedImage);
        QuadTextureChunk->setEnvMode(GL_MODULATE);
    endEditCP(QuadTextureChunk, TextureChunk::ImageFieldMask);

	MaterialChunkPtr PSMaterialChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunk);
		PSMaterialChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunk);

	ChunkMaterialPtr PSSmokeMaterial = ChunkMaterial::create();
	beginEditCP(PSSmokeMaterial, ChunkMaterial::ChunksFieldMask);
		PSSmokeMaterial->addChunk(QuadTextureChunk);
		PSSmokeMaterial->addChunk(PSMaterialChunk);
		PSSmokeMaterial->addChunk(PSBlendChunk);
	endEditCP(PSSmokeMaterial, ChunkMaterial::ChunksFieldMask);


	//Particle System
		//Rocket
    RocketParticleSystem = osg::ParticleSystem::create();
	RocketParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	TutorialRocketParticleSystemListener TheRocketListener;
	RocketParticleSystem->addParticleSystemListener(&TheRocketListener);

		//smoke
	SmokeParticleSystem = osg::ParticleSystem::create();
	SmokeParticleSystem->attachUpdateListener(TutorialWindowEventProducer);
		//Shrapnel
	ShrapnelParticleSystem = osg::ParticleSystem::create();
	ShrapnelParticleSystem->attachUpdateListener(TutorialWindowEventProducer);
		//Fireball
	FireballParticleSystem = osg::ParticleSystem::create();
	FireballParticleSystem->attachUpdateListener(TutorialWindowEventProducer);



	//Particle System Drawer
		//Rocket does not have a drawer because it is being attached to a special node core
		//Smoke
	SmokeParticleSystemDrawer = osg::QuadParticleSystemDrawer::create();
	//SmokeParticleSystemDrawer->setQuadSizeScaling(Vec2f(0.5f,0.5f));
		//Shrapnel
	ExampleShrapnelParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
    ExampleShrapnelParticleSystemDrawer->setForcePerParticleSizing(true);
		//Fireball
	ExampleFireballParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
    ExampleFireballParticleSystemDrawer->setForcePerParticleSizing(true);

		
	
	//Particle System Node
		//collision node
	//NodePtr EnvironmentNode = makeSphere(2,4.0f);

	Matrix EnvironmentTransformation;
	EnvironmentTransformation.setScale(0.1f);

	TransformPtr EnvironmentTransformCore = Transform::create();
	beginEditCP(EnvironmentTransformCore, Transform::MatrixFieldMask);
		EnvironmentTransformCore->setMatrix(EnvironmentTransformation);
	endEditCP(EnvironmentTransformCore, Transform::MatrixFieldMask);
	
	NodePtr EnvironmentNode = Node::create();
	beginEditCP(EnvironmentNode, Node::CoreFieldMask | Node::ChildrenFieldMask);
		EnvironmentNode->setCore(EnvironmentTransformCore);
		//EnvironmentNode->addChild(SceneFileHandler::the().read("Data/Chloroplast.osb"));
		EnvironmentNode->addChild(SceneFileHandler::the().read("Data/house.obj"));
	endEditCP(EnvironmentNode, Node::CoreFieldMask | Node::ChildrenFieldMask);

		//NodePtr ParticlePrototypeNode = makeTorus(1.0,4.0,16,16);
	NodePtr RocketParticlePrototypeNode = SceneFileHandler::the().read("Data/rocket.obj");
    if(RocketParticlePrototypeNode == NullFC)
    {
        RocketParticlePrototypeNode = makeTorus(.5, 2, 16, 16);
    }
	
    NodeParticleSystemCorePtr RocketParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(RocketParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		RocketParticleNodeCore->setSystem(RocketParticleSystem);
		RocketParticleNodeCore->setPrototypeNode(RocketParticlePrototypeNode);
        RocketParticleNodeCore->setNormalSource(NodeParticleSystemCore::NORMAL_VELOCITY);
        RocketParticleNodeCore->setUpSource(NodeParticleSystemCore::UP_PARTICLE_NORMAL);
        RocketParticleNodeCore->setUp(Vec3f(0.0f,1.0f,0.0f));
    endEditCP(RocketParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
	
	//Geometry Collision Affector
	GeometryCollisionParticleSystemAffectorPtr ExampleGeometryCollisionParticleSystemAffector = GeometryCollisionParticleSystemAffector::create();
	beginEditCP(ExampleGeometryCollisionParticleSystemAffector, GeometryCollisionParticleSystemAffector::CollisionNodeFieldMask);
		ExampleGeometryCollisionParticleSystemAffector->setCollisionNode(EnvironmentNode);
	endEditCP(ExampleGeometryCollisionParticleSystemAffector, GeometryCollisionParticleSystemAffector::CollisionNodeFieldMask);

	TutorialParticleCollisionListener TheCollisionListener;
	ExampleGeometryCollisionParticleSystemAffector->addParticleGeometryCollisionListener(&TheCollisionListener);


	NodePtr RocketParticleNode = osg::Node::create();
    beginEditCP(RocketParticleNode, Node::CoreFieldMask);
        RocketParticleNode->setCore(RocketParticleNodeCore);
    endEditCP(RocketParticleNode, Node::CoreFieldMask);

	//Attach the Affector to the Rocket Particle System
	beginEditCP(RocketParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);
		//RocketParticleSystem->getAffectors().push_back();
		RocketParticleSystem->getSystemAffectors().push_back(ExampleGeometryCollisionParticleSystemAffector);
	endEditCP(RocketParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);

		
		//Smoke
	SmokeGenerator = osg::RateParticleGenerator::create();
			//Attach the function objects to the Generator
	SmokePositionDistribution = createSmokePositionDistribution();
	beginEditCP(SmokeGenerator, RateParticleGenerator::PositionDistributionFieldMask | RateParticleGenerator::LifespanDistributionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
		SmokeGenerator->setPositionDistribution(SmokePositionDistribution);
		SmokeGenerator->setLifespanDistribution(createSmokeLifespanDistribution());
		SmokeGenerator->setGenerationRate(50.0);
		SmokeGenerator->setVelocityDistribution(createSmokeVelocityDistribution());
	endEditCP(SmokeGenerator, RateParticleGenerator::PositionDistributionFieldMask | RateParticleGenerator::LifespanDistributionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
			//Attach the function objects the Affectors
	SmokeAgeFadeParticleAffector = osg::AgeFadeParticleAffector::create();
	beginEditCP(SmokeAgeFadeParticleAffector, AgeFadeParticleAffector::FadeInTimeFieldMask | AgeFadeParticleAffector::FadeOutTimeFieldMask | AgeFadeParticleAffector::StartAlphaFieldMask| AgeFadeParticleAffector::FadeToAlphaFieldMask | AgeFadeParticleAffector::EndAlphaFieldMask);
		SmokeAgeFadeParticleAffector->setFadeInTime(2.0f);
		SmokeAgeFadeParticleAffector->setFadeOutTime(5.0f);
		SmokeAgeFadeParticleAffector->setStartAlpha(0.0f);
		SmokeAgeFadeParticleAffector->setFadeToAlpha(0.2f);
		SmokeAgeFadeParticleAffector->setEndAlpha(0.0f);	
	endEditCP(SmokeAgeFadeParticleAffector, AgeFadeParticleAffector::FadeInTimeFieldMask | AgeFadeParticleAffector::FadeOutTimeFieldMask | AgeFadeParticleAffector::StartAlphaFieldMask| AgeFadeParticleAffector::FadeToAlphaFieldMask | AgeFadeParticleAffector::EndAlphaFieldMask);

	SmokeAgeSizeParticleAffector = osg::AgeSizeParticleAffector::create();
	beginEditCP(SmokeAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
			//ages
			SmokeAgeSizeParticleAffector->getAges().push_back(0.1);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.2);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.3);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.5);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.7);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.8);
			SmokeAgeSizeParticleAffector->getAges().push_back(1.0);

			//sizes
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(0.5,0.5,0.5));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(1.0,1.0,1.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.0,2.0,2.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(3.0,3.0,3.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(4.0,4.0,4.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(5.0,5.0,5.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(6.5,6.5,6.5));
	endEditCP(SmokeAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
   
	ParticleSystemCorePtr SmokeParticleNodeCore = osg::ParticleSystemCore::create();
    beginEditCP(SmokeParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
		SmokeParticleNodeCore->setSystem(SmokeParticleSystem);
		SmokeParticleNodeCore->setDrawer(SmokeParticleSystemDrawer);
		SmokeParticleNodeCore->setMaterial(PSSmokeMaterial);
    endEditCP(SmokeParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
    
	NodePtr SmokeParticleNode = osg::Node::create();
    beginEditCP(SmokeParticleNode, Node::CoreFieldMask);
        SmokeParticleNode->setCore(SmokeParticleNodeCore);
    endEditCP(SmokeParticleNode, Node::CoreFieldMask);
		//end/////////////////////

		//Shrapnel
	ShrapnelBurstGenerator = osg::BurstParticleGenerator::create();
	NodePtr ShrapnelParticlePrototypeNode = SceneFileHandler::the().read("Data/Shrapnel.obj");

    NodeParticleSystemCorePtr ShrapnelParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(ShrapnelParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		ShrapnelParticleNodeCore->setSystem(ShrapnelParticleSystem);
		ShrapnelParticleNodeCore->setPrototypeNode(ShrapnelParticlePrototypeNode);
    endEditCP(ShrapnelParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
			
			//Attach the function objects to the Generator
	ShrapnelPositionDistribution = createShrapnelPositionDistribution();
	beginEditCP(ShrapnelBurstGenerator, BurstParticleGenerator::PositionDistributionFieldMask | BurstParticleGenerator::LifespanDistributionFieldMask);
		ShrapnelBurstGenerator->setPositionDistribution(ShrapnelPositionDistribution);
		ShrapnelBurstGenerator->setLifespanDistribution(createLifespanDistribution());
		ShrapnelBurstGenerator->setBurstAmount(50.0);
		ShrapnelBurstGenerator->setVelocityDistribution(createShrapnelVelocityDistribution());
		ShrapnelBurstGenerator->setAccelerationDistribution(createShrapnelAccelerationDistribution());
	endEditCP(ShrapnelBurstGenerator, BurstParticleGenerator::PositionDistributionFieldMask | BurstParticleGenerator::LifespanDistributionFieldMask);

	NodePtr ShrapnelParticleNode = osg::Node::create();
    beginEditCP(ShrapnelParticleNode, Node::CoreFieldMask);
        ShrapnelParticleNode->setCore(ShrapnelParticleNodeCore);
    endEditCP(ShrapnelParticleNode, Node::CoreFieldMask);
		//end/////////////////////

		//fireball
	FireballGenerator = osg::BurstParticleGenerator::create();
	NodePtr FireballParticlePrototypeNode = SceneFileHandler::the().read("Data/bubble.obj");

	NodeParticleSystemCorePtr FireballParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(FireballParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		FireballParticleNodeCore->setSystem(FireballParticleSystem);
		FireballParticleNodeCore->setPrototypeNode(FireballParticlePrototypeNode);
	 endEditCP(FireballParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
			//Attach the function objects to the Generator
	FireballPositionDistribution = createFireballPositionDistribution();
	beginEditCP(FireballGenerator, RateParticleGenerator::PositionDistributionFieldMask | RateParticleGenerator::LifespanDistributionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
		FireballGenerator->setPositionDistribution(FireballPositionDistribution);
		FireballGenerator->setLifespanDistribution(createFireballLifespanDistribution());
		FireballGenerator->setBurstAmount(100.0);
		FireballGenerator->setVelocityDistribution(createFireballVelocityDistribution());
		FireballGenerator->setAccelerationDistribution(createFireballAccelerationDistribution());
	endEditCP(FireballGenerator, RateParticleGenerator::PositionDistributionFieldMask | RateParticleGenerator::LifespanDistributionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
			//Attach the function objects the Affectors
	FireballAgeSizeParticleAffector = osg::AgeSizeParticleAffector::create();
	beginEditCP(FireballAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
			//ages
			FireballAgeSizeParticleAffector->getAges().push_back(0.1);
			FireballAgeSizeParticleAffector->getAges().push_back(0.2);
			FireballAgeSizeParticleAffector->getAges().push_back(0.3);
			FireballAgeSizeParticleAffector->getAges().push_back(0.5);
			FireballAgeSizeParticleAffector->getAges().push_back(0.7);
			FireballAgeSizeParticleAffector->getAges().push_back(0.8);
			FireballAgeSizeParticleAffector->getAges().push_back(1.0);

			//sizes
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.0,2.0,2.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.3,2.3,2.3));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.5,2.5,2.5));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(3.0,3.0,3.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(4.0,4.0,4.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(5.0,5.0,5.0));
			FireballAgeSizeParticleAffector->getSizes().push_back(Vec3f(6.5,6.5,6.5));
	endEditCP(FireballAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
   
	NodePtr FireballParticleNode = osg::Node::create();
    beginEditCP(FireballParticleNode, Node::CoreFieldMask);
        FireballParticleNode->setCore(FireballParticleNodeCore);
    endEditCP(FireballParticleNode, Node::CoreFieldMask);
		//end/////////////////////


    // Make Main Scene Node 
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(RocketParticleNode);
		scene->addChild(SmokeParticleNode);
		scene->addChild(ShrapnelParticleNode);
		scene->addChild(FireballParticleNode);
		scene->addChild(EnvironmentNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

	mgr->getNavigator()->set(Pnt3f(0.0,0.0,0.0), Pnt3f(0.0,0.0,-1.0), Vec3f(0.0,1.0,0.0));
	mgr->getNavigator()->setMotionFactor(1.0f);
	mgr->getCamera()->setNear(0.1f);
	mgr->getCamera()->setFar(1000.0f);


    //Open Window
    Vec2f WinSize(TutorialWindowEventProducer->getDesktopSize() * 0.85f);
    Pnt2f WinPos((TutorialWindowEventProducer->getDesktopSize() - WinSize) *0.5);
    TutorialWindowEventProducer->openWindow(WinPos,
            WinSize,
            "10RocketLauncher");

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
    //Cylinder Distribution
    CylinderDistribution3DPtr TheCylinderDistribution = CylinderDistribution3D::create();
    beginEditCP(TheCylinderDistribution);
      TheCylinderDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheCylinderDistribution->setInnerRadius(30.0);
      TheCylinderDistribution->setOuterRadius(100.0);
      TheCylinderDistribution->setMinTheta(0.0);
      TheCylinderDistribution->setMaxTheta(6.283185);
      TheCylinderDistribution->setHeight(400.0);
      TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
      TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);
    endEditCP(TheCylinderDistribution);

    return TheCylinderDistribution;
}


Distribution1DPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(100.0f);
      TheLifespanDistribution->setStandardDeviation(2.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}
Distribution3DPtr createVelocityDistribution(void)
{
	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
 		TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,-4.5));
		TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,-5.0));
    endEditCP(TheLineDistribution);

    return TheLineDistribution;
}
Distribution3DPtr createSmokePositionDistribution(void)
{
     //Disc Distribution
    DiscDistribution3DPtr TheDiscDistribution = DiscDistribution3D::create();
    beginEditCP(TheDiscDistribution);
      TheDiscDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheDiscDistribution->setInnerRadius(01.0);
      TheDiscDistribution->setOuterRadius(02.0);
      TheDiscDistribution->setMinTheta(0.0);
      TheDiscDistribution->setMaxTheta(6.283185307);
      TheDiscDistribution->setNormal(Vec3f(0.0,0.0,1.0));
      TheDiscDistribution->setSurfaceOrEdge(DiscDistribution3D::SURFACE);
    endEditCP(TheDiscDistribution);


    return TheDiscDistribution;
}

Distribution1DPtr createSmokeLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(5.0f);
      TheLifespanDistribution->setStandardDeviation(0.5);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

Distribution3DPtr createSmokeVelocityDistribution(void)
{
	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
 		TheLineDistribution->setPoint1(Pnt3f(0.0,1.0,1.0));
		TheLineDistribution->setPoint2(Pnt3f(0.0,1.0,3.0));
    endEditCP(TheLineDistribution);

    return TheLineDistribution;
}
Distribution3DPtr createShrapnelPositionDistribution(void)
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
Distribution3DPtr createShrapnelAccelerationDistribution(void)
{

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,-3.0));
	  TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,-3.0));
    endEditCP(TheLineDistribution);

    return TheLineDistribution;
} 
Distribution3DPtr createShrapnelVelocityDistribution(void)
{
   

	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(3.0);
      TheSphereDistribution->setOuterRadius(10.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::VOLUME);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}

Distribution3DPtr createFireballVelocityDistribution(void)
{
	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(3.0);
      TheSphereDistribution->setOuterRadius(5.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::VOLUME);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}
Distribution3DPtr createFireballPositionDistribution(void)
{
     //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(1.0);
      TheSphereDistribution->setOuterRadius(2.0);
      TheSphereDistribution->setMinTheta(0.0);
      TheSphereDistribution->setMaxTheta(6.283185);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}

Distribution3DPtr createFireballAccelerationDistribution(void)
{

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,1.0));
	  TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,1.0));
    endEditCP(TheLineDistribution);

    return TheLineDistribution;
} 
Distribution1DPtr createFireballLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(3.0f);
      TheLifespanDistribution->setStandardDeviation(0.5);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}
