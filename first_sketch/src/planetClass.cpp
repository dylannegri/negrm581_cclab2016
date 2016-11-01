#include "planetClass.h"

void planetClass::setup() {
	planetGroup.add(rotateSpeed.set("speed", 1.0, 0.0, 9.0));
	planetGroup.add(posX.set("X", 0, 0, 600));
	planetGroup.add(posY.set("Y", 0, 0, 600));
	planetGroup.add(resolution.set("resolution", 1, 0, 10));

	radius = 50;
	red = 255;
	green = 0;
	blue = 0;
}

void planetClass::update() {
	rotation++;
	if (red == 255 && green < 255 && blue == 0) {
		green++;
	}
	else if (red > 0 && green ==255 && blue == 0) {
		red--;
	}
	else if (red == 0 && green == 255 && blue < 255) {
		blue++;
	}
	else if (red == 0 && green > 0 && blue == 255) {
		green--;
	}
	else if (red < 255 && green == 0 && blue == 255) {
		red++;
	}
	else if (red == 255 && green == 0 && blue > 0) {
		blue--;
	}
}

void planetClass::draw() {

	ofSetCircleResolution(resolution);
	ofSetColor(red, green, blue);
	ofRotate(rotation * rotateSpeed);
	ofCircle(posX, posY, radius);
}