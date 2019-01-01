#include "Holes.h"

void Holes::draw(RenderWindow & window)
{
	for (std::size_t i = 0; i < holes.size(); ++i) {
		holes[i].draw(window);
	}
}
