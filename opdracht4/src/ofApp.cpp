#include "ofApp.h"
#include "Particle.h";

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	factory1 = ParticeFactory();
	factory1.SetOrigin(200, 400);
	factory1.SetCurvingParticleRatio(0.1);
	factory1.setColours(ofColor(255,0,0), ofColor(200, 0, 0, 200));

	factory2 = ParticeFactory();
	factory2.SetOrigin(700, 400);
	factory2.SetCurvingParticleRatio(0.8);
	factory2.setColours(ofColor(0, 255, 0), ofColor(0, 100, 0, 200));
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < _particles.size(); i++) {
		_particles[i]->move();
	}

	Particle* freshParticle1 = factory1.emit();
	_particles.push_back(freshParticle1);

	Particle* freshParticle2 = factory2.emit();
	_particles.push_back(freshParticle2);
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < _particles.size(); i++) {
		_particles[i]->draw();
	}
}
