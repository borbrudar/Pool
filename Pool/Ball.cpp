#include "Ball.h"

void Ball::draw(RenderWindow & window)
{
	window.draw(circ);
}

void Ball::init(float r, Vector2f pos)
{
	circ.setFillColor(Color::Black);
	circ.setRadius(r);
	circ.setPosition(pos);
}
