// --------------------------Dragon.h-----------------------------------------
// Pavel Samsonov CSS 342
// 22 April 2017
// ---------------------------------------------------------------------------
// Purpose - Provide a visual representation of the Dragon curve
// --------------------------------------------------------------------------- 
// Notes on specifications, special algorithms, and assumptions.
// n/a
// ---------------------------------------------------------------------------

// Dragon Class 
#ifndef DRAGON_H
#define DRAGON_H

#include "Turtle.h"
#include <iostream>
#include <math.h>
using namespace std;

class Dragon : Turtle {
public:
	Dragon(float initX = 0.0, float initY = 0.0, float initAngle = 0.0);
	void leftCurve(int l, float d);  //draw a level-l left curve with dist d
	void rightCurve(int l, float d); //draw a level-l right curve with dist d
};
#endif