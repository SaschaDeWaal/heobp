#include "ParticeFactory.h"

#include "CurvingParticle.h"
#include "BounceParticle.h"

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

	int random = ofRandom(3);

	if (random == 0) {
		newParticle = new CurvingParticle(originX, originY, inner, outer);
	}else if(random == 1){
		newParticle = new Particle(originX, originY, inner, outer);
	}
	else {
		newParticle = new BounceParticle(originX, originY, inner, outer);
	}


	return newParticle;
}

