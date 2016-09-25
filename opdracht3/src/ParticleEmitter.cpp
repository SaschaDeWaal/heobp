#include "ParticleEmitter.h"
#include "ofMain.h"


ParticleEmitter::ParticleEmitter(){
	
}

void ParticleEmitter::Setup(ofPoint pos) {
	position = pos;
}

void ParticleEmitter::Create() {
	for (int i = 0; i < particles.size(); i++) {
		particles[i] = particle();
		particles[i].position = position;
	}
}



