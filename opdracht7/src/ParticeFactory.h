#pragma once

#include "Particle.h";

class ParticeFactory{


public:

	//waarom het een const is:
	//Deze functie maakt een object aan die vervolgens met de return meekomen.
	//Hij gebruikt hiervoor wel vars, maar die worden meegestuurt als parameters.
	//Er wordt dus niks gedaan met de members van ParticeFactory.
	Particle* emit(int x, int y, ofColor innerColour, ofColor outerColour) const;
	static ParticeFactory* instance();
	
private:
	static ParticeFactory* particeFactory;
	ParticeFactory();
};

