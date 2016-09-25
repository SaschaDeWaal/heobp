#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	array<ofPoint, 3> emitterPositions{ ofPoint(500, 500), ofPoint(300, 300) , ofPoint(100, 100) };

	for (int i = 0; i < emitters.size(); i++) {
		emitters[i] = ParticleEmitter();
		emitters[i].Setup(emitterPositions[i]);
		emitters[i].Create();
	}

	
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int j = 0; j < emitters.size(); j++) {
		for (int i = 0; i < emitters[j].particles.size(); i++) {
			emitters[j].particles[i].Move();
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int j = 0; j < emitters.size(); j++) {
		for (int i = 0; i < emitters[j].particles.size(); i++) {
			emitters[j].particles[i].Draw();
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	setup();
}


