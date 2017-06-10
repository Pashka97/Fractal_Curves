// Dragon member function definitions
#include "Dragon.h"

//------------------------- Dragon Curve -------------------------------------
//Constructs a Dragon object at two int coordinates at a float angle
Dragon::Dragon(float initX, float initY, float initAngle)
	: Turtle(initX, initY, initAngle) {
}

//------------------------------ leftCurve -----------------------------------
// draw a level-l left curve with dist d
void Dragon::leftCurve(int level, float d) {
	if (level > 0) {
		leftCurve(level - 1, d);
		turn(90);
		rightCurve(level - 1, d);
		turn(90);
	}
	else {
		draw(d);
	}
}

//------------------------------ rightCurve ----------------------------------
// draw a level-l right curve with dist d
void Dragon::rightCurve(int level, float d) {
	if (level > 0) {
		turn(-90);
		leftCurve(level - 1, d);
		turn(-90);
		rightCurve(level - 1, d);
	}
	else {
		draw(d);
	}
}
