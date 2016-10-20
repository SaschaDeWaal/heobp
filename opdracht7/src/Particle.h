#pragma once


#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY, ofColor inner, ofColor outer);

		//dit is een setting. Hoeft maar 1 keer gezet te worden. 
		const int totalLiveTime = 200;

		int liveTime = 200;

        virtual void move();

		//waarom dit een const is:
		//Deze methode roept all andere methodes aan.
		//Deze methodes krijgen wel vars mee, maar deze worden niet aangepast. De members van Particle worden puur gebruikt als referenties.
        void draw() const;

        void setColours(ofColor center, ofColor inner, ofColor outer);

    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
        long lifetime;

        ofColor centerColour = ofColor::white;
        ofColor innerColour;
        ofColor outerColour;

};

