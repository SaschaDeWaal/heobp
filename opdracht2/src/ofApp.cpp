#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i] = particle();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].Move();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < particles.size(); i++) {
		particles[i].Draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}


