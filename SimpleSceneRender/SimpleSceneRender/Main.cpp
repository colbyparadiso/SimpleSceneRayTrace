//Builds Scene and Objects within. Then will do the calculations for ray incidence projecting from viewport. Finally rasterizing per pixel and output to Windows app.

#include <iostream>
#include "Scene.h"
#include "Plane.h"

int main(void) {
	Scene scene1(10,10,10);
	scene1.addLight(0,0,9);
	Plane plane1 = scene1.addObject("Plane", { 5,0,2.5 }, { 0,5,2.5 }, { 5,0,7.5 }, { 0,5,7.5 });
	scene1.addPerspective(-2, -2, 5, plane1); //({x,y,z} (VantagePt), plane1}
	scene1.addObject("Sphere", 6,6,4, 2); // ("Type", {x,y,z}, radius}
	projectScene(scene1, 480) //(Scene to render, X pixel dimension)
}