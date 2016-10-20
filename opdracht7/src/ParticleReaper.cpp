//test!

#include "ParticleReaper.h"
#include "Particle.h";


ParticleReaper::ParticleReaper(){

}


void ParticleReaper::Check(vector<Particle*> *particles) const{

	for (vector<Particle*>::iterator it = (*particles).begin(); it != (*particles).end();) {

		(*it)->liveTime -= 1;

		
		if ((*it)->liveTime < 0) {
			vector<Particle*>::iterator next = it++;
			(*particles).erase(it);
			it = next;
		}

		it++;
	}

	cout << "Objects count " << (*particles).size() << "\n";
}
