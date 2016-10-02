#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(int startX, int startY, ofColor inner, ofColor outer) : Particle(startX, startY, inner, outer) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

void CurvingParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
}