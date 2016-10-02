#include "Particle.h"

Particle::Particle(int startX, int startY, ofColor inner, ofColor outer) {
    radius = ofRandom(10, 50);
    position = ofPoint(startX,
                       startY);


    speed = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));

    innerColour = inner;
    outerColour = outer;
}

void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
    centerColour = center;
    innerColour = inner;
    outerColour = outer;
}

void Particle::move() {
    position += speed;
}


void Particle::draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 2.0);

    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, radius);

    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius * 0.25);
}
