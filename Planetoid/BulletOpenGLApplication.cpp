#include "BulletOpenGLApplication.h"

BulletOpenGLApplication::BulletOpenGLApplication() {}
BulletOpenGLApplication::~BulletOpenGLApplication() {}
void BulletOpenGLApplication::Initialize() {}
void BulletOpenGLApplication::Keyboard(unsigned char key, int x, int y) {}
void BulletOpenGLApplication::KeyboardUp(unsigned char key, int x, int y) {}
void BulletOpenGLApplication::Special(int key, int x, int y) {}
void BulletOpenGLApplication::SpecialUp(int key, int x, int y) {}
void BulletOpenGLApplication::Reshape(int w, int h) {}
void BulletOpenGLApplication::Idle() {}
void BulletOpenGLApplication::Mouse(int button, int state, int x, int y) {}
void BulletOpenGLApplication::PassiveMotion(int x, int y) {}
void BulletOpenGLApplication::Motion(int x, int y) {}
void BulletOpenGLApplication::Display() {}


void BulletOpenGLApplication::UpdateCamera() {
	// exit in erroneous situations
	if (m_screenWidth == 0 && m_screenHeight == 0)
		return;

	// select the projection matrix
	glMatrixMode(GL_PROJECTION);
	// set it to the matrix-equivalent of 1
	glLoadIdentity();
	// determine the aspect ratio of the screen
	float aspectRatio = m_screenWidth / (float)m_screenHeight;
	// create a viewing frustum based on the aspect ratio and the
	// boundaries of the camera
	glFrustum(-aspectRatio * m_nearPlane, aspectRatio * m_nearPlane, -m_nearPlane, m_nearPlane, m_nearPlane, m_farPlane);
	// the projection matrix is now set

	// select the view matrix
	glMatrixMode(GL_MODELVIEW);
	// set it to '1'
	glLoadIdentity();
	// create a view matrix based on the camera's position and where it's
	// looking
	gluLookAt(m_cameraPosition[0], m_cameraPosition[1], m_cameraPosition[2], m_cameraTarget[0], m_cameraTarget[1], m_cameraTarget[2], m_upVector.getX(), m_upVector.getY(), m_upVector.getZ());
	// the view matrix is now set
}
