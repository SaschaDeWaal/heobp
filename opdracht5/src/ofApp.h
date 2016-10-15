#pragma once

#include "ofMain.h";
#include "Particle.h";
#include "ParticeFactory.h";
#include "ParticleReaper.h";

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		vector<Particle*> _particles;
		
		ParticeFactory factory1;
		ParticeFactory factory2;
		ParticeFactory factory3;
		ParticleReaper reaper;
};

