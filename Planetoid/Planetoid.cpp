// Planetoid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BulletOpenGLApplication.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char* argv[])
{
	BulletOpenGLApplication demo;
	return glutmain(argc, argv, 1024, 768, "Introduction to Game Physics with Bullet Physics and OpenGL", &demo);
}

