#pragma once

#include "ofMain.h"
#include "particle.h"

class ParticleEmitter {

	public:
		ofPoint position; 
		array<particle, 10> particles;

		ParticleEmitter();

		void Setup(ofPoint pos);
		void Create();
		
};