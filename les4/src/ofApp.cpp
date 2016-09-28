#include "ofApp.h"
#include "Particle.h";

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	factory1 = ParticeFactory();
	factory1.SetOrigin(100, 100);
	factory1.SetCurvingParticleRatio(0.1);

	factory2 = ParticeFactory();
	factory2.SetOrigin(400, 400);
	factory2.SetCurvingParticleRatio(0.8);
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
