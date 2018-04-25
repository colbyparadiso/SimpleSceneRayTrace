#include "stdafx.h"
#include "Scene.h"


Scene::Scene()
{
	length = 0.0f;
	width = 0.0f;
	height = 0.0f;
}

Scene::Scene(int length, int width, int height) {
	int c1[3] = { 0, 0, 0 };
	int c2[3] = { length, 0, 0 };
	int c3[3] = { 0, width, 0 };
	int c4[3] = { 0, 0, height };
	int c5[3] = { length, width, 0 };
	int c6[3] = { 0, width, height };
	int c7[3] = { length, 0, height };
	int c8[3] = { length, width, height };
}


Scene::~Scene()
{
}


int Scene::projectScene()
{
	// TODO: Add your implementation code here.
	return 0;
}


int Scene::addPerspective()
{
	// TODO: Add your implementation code here.
	return 0;
}


int Scene::removeProjection()
{
	// TODO: Add your implementation code here.
	return 0;
}


int Scene::addObject()
{
	// TODO: Add your implementation code here.
	return 0;
}


int Scene::removeObject()
{
	// TODO: Add your implementation code here.
	return 0;
}


int Scene::addLight(int x, int y, int z)
{
	// TODO: Add your implementation code here.
	
}


int Scene::removeLight()
{
	// TODO: Add your implementation code here.
	return 0;
}
