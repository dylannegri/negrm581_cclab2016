#pragma once

#include "ofMain.h"

class planetClass {
public:
	void setup();
	void update();
	void draw();

	ofParameterGroup planetGroup;
	ofParameter<float> rotateSpeed;
	ofParameter<float> posX;
	ofParameter<float> posY;
	ofParameter<float> radius;

	float rotation = 0.0;
	int blue;
	int red;
	int green;

};
