#pragma once
#include "Particle.h";
#include "ofMain.h";


class ParticleReaper
{
public:
	ParticleReaper();
	
	void Check(vector<Particle*> *particles);
};

