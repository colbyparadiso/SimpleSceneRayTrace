#pragma once
#include "Object.h"
class Sphere :
	public Object
{
public:
	Sphere();
	~Sphere();
	float centerPt;
	float radius;
};

