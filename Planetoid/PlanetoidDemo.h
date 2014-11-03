#include "BulletOpenGLApplication.h"
#include "btBulletDynamicsCommon.h"

#define EXPLOSION_STRENGTH 50.0f

class PlanetoidDemo : public BulletOpenGLApplication {
public:
	PlanetoidDemo();

	virtual void InitializePhysics() override;
	virtual void ShutdownPhysics() override;

	void CreateObjects();

	virtual void Keyboard(unsigned char key, int x, int y) override;
	virtual void KeyboardUp(unsigned char key, int x, int y) override;
	virtual void UpdateScene(float dt);

	virtual void CollisionEvent(btRigidBody* pBody0, btRigidBody* pBody1) override;

protected:
	// our box to lift
	GameObject* m_pBox;

	// a simple trigger volume
	btCollisionObject* m_pTrigger;

	// explosion variables
	btCollisionObject* m_pExplosion;
	GLboolean m_bCanExplode;
};