// Planetoid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PlanetoidDemo.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char* argv[])
{
	PlanetoidDemo demo;
	return glutmain(argc, argv, 1024, 768, "Planetoid Demo", &demo);
}

