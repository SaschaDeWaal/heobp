#pragma once

#include "ofMain.h"
#include "particle.h"
#include "ParticleEmitter.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		array<ParticleEmitter, 3> emitters;

		
};
