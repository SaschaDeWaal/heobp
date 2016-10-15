#include "ParticeFactory.h"

#include "CurvingParticle.h"
#include "BounceParticle.h"

ParticeFactory::ParticeFactory() {

}

ParticeFactory* ParticeFactory::instance() {

	if (!ParticeFactory::particeFactory) {
		ParticeFactory::particeFactory = new ParticeFactory();
	}

	return ParticeFactory::particeFactory;
}

ParticeFactory* ParticeFactory::particeFactory = 0;

Particle* ParticeFactory::emit(int x, int y, ofColor innerColour, ofColor outerColour) {

	Particle* newParticle;

	int random = ofRandom(3);

	if (random == 0) {
		newParticle = new CurvingParticle(x, y, innerColour, outerColour);
	}else if(random == 1){
		newParticle = new Particle(x, y, innerColour, outerColour);
	}
	else {
		newParticle = new BounceParticle(x, y, innerColour, outerColour);
	}

	return newParticle;
}

