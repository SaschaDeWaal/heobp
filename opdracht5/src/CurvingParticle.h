#pragma once


#include "ofMain.h"
#include "Particle.h"

class CurvingParticle : public Particle {
    public:
        CurvingParticle(int startX, int startY, ofColor inner, ofColor outer);

        void move();

        ofVec2f curve;
};

