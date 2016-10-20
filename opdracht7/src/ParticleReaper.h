#pragma once
#include "Particle.h";
#include "ofMain.h";


class ParticleReaper
{
public:
	ParticleReaper();
	
	//waarom dit een const is:
	//deze methode werkt alleen met variable die buiten het object zitten (geen members van ParticleReaper).
	//hij werkt dus puur met verwijzingen die hij meekrijgt als parameter.
	void Check(vector<Particle*> *particles) const;
};

