#include "BounceParticle.h"


BounceParticle::BounceParticle(int startX, int startY, ofColor inner, ofColor outer) : Particle(startX, startY, inner, outer) {

}

void BounceParticle::move() {
	position += speed;

	if (position.x < 0 || position.x > 1024) speed.x *= -1;
	if (position.y < 0 || position.y > 768) speed.y *= -1;
}
