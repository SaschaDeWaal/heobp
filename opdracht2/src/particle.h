#pragma once

#include "ofMain.h"

class particle
{
public:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long rotateSpeed;
	long lifeTime;

	ofColor centerColor = ofColor::white;
	ofColor innerColor;
	ofColor outerColor;

	particle();

	void Setup();
	void Move();
	void Draw();

};

