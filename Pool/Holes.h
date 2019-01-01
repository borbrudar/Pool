#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Ball.h"


using namespace sf;
class Holes {
public:
	Holes(std::vector<float> rHoles,std::vector<Vector2f> posHoles) {
		holes.resize(rHoles.size());
		for (std::size_t i = 0; i < holes.size(); ++i) {
			holes[i].init(rHoles[i], posHoles[i]);
		}
	}
	std::vector<Ball> holes;
	void draw(RenderWindow &window);
};