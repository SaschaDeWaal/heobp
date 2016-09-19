//file

#include "particle.h"

particle::particle() {
	radius = ofRandom(0, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	rotateSpeed = ofRandom(-1.0, 1.0);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5))*0.5;

	innerColor = ofColor( 31, 127, 127);
	outerColor = ofColor(255, 255,  255, 50);
}


void particle::Setup() {

}

void particle::Move() {
	position += speed;
	if (position.x < (particle::radius * 2) || position.x > 1024 - (particle::radius * 2)) {
		speed.x *= -1;
		rotateSpeed *= -1;
	}
	if (position.y < (particle::radius * 2) || position.y >  768 - (particle::radius * 2)) {
		speed.y *= -1;
		rotateSpeed *= -1;
	}
	speed.rotate(rotateSpeed);
}

void particle::Draw() {
	ofSetColor(outerColor);
	ofDrawCircle(position.x, position.y, radius*2);

	ofSetColor(innerColor);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColor);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}

