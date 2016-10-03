#pragma once

#include "ofMain.h"
#include "Particle.h"

class BounceParticle : public Particle
{
public:
	BounceParticle(int startX, int startY, ofColor inner, ofColor outer);

	void move();

	ofVec2f curve;
};

