#pragma once
#include "Plane.h"
class Canvas :
	public Plane
{
public:
	Canvas();
	~Canvas();
	float c1;
	float c2;
	float c3;
	int resX;
	int resY;
};

