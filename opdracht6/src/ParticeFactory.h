#pragma once

#include "Particle.h";

class ParticeFactory{


public:
	Particle* emit(int x, int y, ofColor innerColour, ofColor outerColour);
	static ParticeFactory* instance();
	
private:
	static ParticeFactory* particeFactory;
	ParticeFactory();
};

