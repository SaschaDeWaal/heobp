#pragma once

#include "ofMain.h";
#include "particle.h";

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);

		particle part1;
		
		
};