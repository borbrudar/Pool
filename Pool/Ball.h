#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Ball {
public:
	void draw(RenderWindow &window);
	void init(float r, Vector2f pos);
	Vector2f pos;
	float radius;
	CircleShape circ;
};