#include "Particle.h"

Particle::Particle(int startX, int startY, ofColor inner, ofColor outer) {
    radius = ofRandom(5, 30);
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


void Particle::draw() const{

	//make smaller when prticle is near end of life time
	float liveSize = ((liveTime*1.0f) / (totalLiveTime*0.2f));
	if (liveSize < 0.0f) liveSize = 0.0f;
	if (liveSize > 1.0f) liveSize = 1.0f;

    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, (radius * 2.0) * liveSize);

    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, (radius) * liveSize);

    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, (radius * 0.25) * liveSize);
}
