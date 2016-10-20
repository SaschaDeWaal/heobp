#include "ofApp.h"
#include "Particle.h";

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(ofColor::black);

	reaper = ParticleReaper();
}

//--------------------------------------------------------------
void ofApp::update(){

	for (vector<Particle*>::iterator it = _particles.begin(); it != _particles.end();it++) {
		(*it)->move();
	}

	ParticeFactory* factory = ParticeFactory::instance();
	

	for (int i = 0; i < particleSpawnersCount; i++) {
		_particles.push_back(
			(*factory).emit(particleSpawnerPos[i].x, particleSpawnerPos[i].y, particleSpwanerInnerColor[i], particleSpwanerOuterColor[i])
		);
	}

	reaper.Check(&_particles);
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (vector<Particle*>::iterator it = _particles.begin(); it != _particles.end();it++) {
		(*it)->draw();
	}
}
