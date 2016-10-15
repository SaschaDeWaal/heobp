#include "ofApp.h"
#include "Particle.h";

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	//factory1 = ParticeFactory();

	reaper = ParticleReaper();
}

//--------------------------------------------------------------
void ofApp::update(){

	for (vector<Particle*>::iterator it = _particles.begin(); it != _particles.end();it++) {
		(*it)->move();
	}

	ParticeFactory* factory = ParticeFactory::instance();
	
	_particles.push_back(
		(*factory).emit(200, 400, ofColor(255, 170, 170, 30), ofColor(255, 170, 170, 100))
	);

	_particles.push_back(
		(*factory).emit(700, 400, ofColor(170, 170, 255, 30), ofColor(170, 170, 255, 100))
	);

	_particles.push_back(
		(*factory).emit(400, 600, ofColor(170, 255, 170, 30), ofColor(170, 255, 170, 100))
	);

	reaper.Check(&_particles);
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (vector<Particle*>::iterator it = _particles.begin(); it != _particles.end();it++) {
		(*it)->draw();
	}
}
