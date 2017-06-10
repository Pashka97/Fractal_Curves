// Program3.cpp : Defines the entry point for the console application.
//

#include "Dragon.h"

#include <iostream>

using namespace std;

int main() {
	// right dragon at level 10
	Dragon dragon10(80, 360, 0);
	dragon10.rightCurve(10, 6);
	// right dragon at level 9
	Dragon dragon9(360, 360, 0);
	dragon9.rightCurve(9, 6);

	// right dragon at level 8
	Dragon dragon8(560, 360, 0);
	dragon8.rightCurve(8, 6);

	// right dragon at level 7
	Dragon dragon7(120, 500, 0);
	dragon7.rightCurve(7, 8);

	// right dragon at level 6
	Dragon dragon6(240, 500, 0);
	dragon6.rightCurve(6, 8);

	// right dragon at level 5
	Dragon dragon5(360, 500, 0);
	dragon5.rightCurve(5, 8);

	// right dragon at level 4
	Dragon dragon4(480, 500, 0);
	dragon4.rightCurve(4, 8);

	// right dragon at level 3
	Dragon dragon3(60, 700, 0);
	dragon3.rightCurve(3, 16);
}