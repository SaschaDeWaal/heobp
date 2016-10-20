#pragma once

#include "ofMain.h";
#include "Particle.h";
#include "ParticeFactory.h";
#include "ParticleReaper.h";

class ofApp : public ofBaseApp{

	private:

		// settings of spawners
		// dit zijn const vars omdat ze maar 1 keer gezet worden. Je kan ze ook in de code zetten, maar nu zijn de settings makelijk aan te passen.
		// zijn arrays omdat ik van compackte code hou. Hoe minder code, hoe overzichtelijker en hoe kleiner de kans op bugs.
		const int particleSpawnersCount = 3;
		const ofPoint particleSpawnerPos[3] = { ofPoint(200, 400),  ofPoint(700, 400), ofPoint(400, 600) };
		const ofColor particleSpwanerInnerColor[3] = { ofColor(255, 170, 170, 30), ofColor(170, 170, 255, 30), ofColor(170, 255, 170, 30) };
		const ofColor particleSpwanerOuterColor[3] = { ofColor(255, 170, 170, 100), ofColor(170, 170, 255, 100), ofColor(170, 255, 170, 100) };


	public:
		void setup();
		void update();
		void draw();

		vector<Particle*> _particles;
		
		ParticleReaper reaper;
};

