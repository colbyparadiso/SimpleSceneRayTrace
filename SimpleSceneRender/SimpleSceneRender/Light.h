#pragma once
class Light
{
public:
	Light();
	Light(float x, float y, float z);
	~Light();
	float centerPt;
	char color;
	float brightness;
};

