#pragma once
class Scene
{
public:
	Scene();
	Scene(int length, int width, int height);
	~Scene();
	float length;
	float width;
	float height;
	int projectScene();
	int addPerspective();
	int removeProjection();
	int addObject();
	int removeObject();
	int addLight();
	int removeLight();
	float objectList;
};

