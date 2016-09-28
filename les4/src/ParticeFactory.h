#pragma once

#include "Particle.h";

class ParticeFactory{

public:
	void SetOrigin(int x, int y);

	void SetCurvingParticleRatio(float ratio);

	void setColours(ofColor innerColour, ofColor outerColour);

	Particle* emit();

private:
	int originX;
	int originY;
	float curvingParticleRatio;
	ofColor inner;
	ofColor outer;

};

