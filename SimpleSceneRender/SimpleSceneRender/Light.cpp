#include "stdafx.h"
#include "Light.h"


Light::Light()
{
	centerPt = 0.0f;
	color = 0;
	brightness = 0.0f;
}

Light::Light(float x, float y, float z) {
	float centerPt[3] = { x,y,z };
}


Light::~Light()
{
}
