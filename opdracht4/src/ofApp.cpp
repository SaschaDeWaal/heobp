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

	factory3 = ParticeFactory();
	factory3.SetOrigin(400, 600);
	factory3.SetCurvingParticleRatio(0.8);
	factory3.setColours(ofColor(0, 0, 255), ofColor(0, 0, 100, 200));
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

	Particle* freshParticle3 = factory3.emit();
	_particles.push_back(freshParticle3);
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < _particles.size(); i++) {
		_particles[i]->draw();
	}
}
