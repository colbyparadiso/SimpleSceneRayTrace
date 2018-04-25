#pragma once
class Object
{
public:
	Object();
	~Object();
	int addBox();
	int removeBox();
	int addSphere();
	int removeSphere();
	int addPlane();
	int removePlane();
	bool isSolid;
};

