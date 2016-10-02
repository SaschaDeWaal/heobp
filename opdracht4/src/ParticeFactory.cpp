#include "ParticeFactory.h"

#include "CurvingParticle.h"

void ParticeFactory::SetOrigin(int x, int y){
	originX = x;
	originY = y;
}

void ParticeFactory::SetCurvingParticleRatio(float ratio) {
	curvingParticleRatio = ratio;
}

void ParticeFactory::setColours(ofColor innerColour, ofColor outerColour) {
	inner = innerColour;
	outer = outerColour;
}

Particle* ParticeFactory::emit() {
	Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new CurvingParticle(originX, originY, inner, outer);
	}else {
		newParticle = new Particle(originX, originY, inner, outer);
		
	}


	return newParticle;
}

