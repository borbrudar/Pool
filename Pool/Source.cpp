#include <SFML/Graphics.hpp>
#include "Holes.h"


//Handles game loop, window creation etc.
int main() {
	using namespace sf;
	
	//setup
	RenderWindow window;
	window.create(VideoMode(640, 480), "Pool game");
	
	Event event;
	std::vector<float> r{ 20.f,20.f,20.f,20.f,20.f,20.f };
	std::vector<Vector2f> pos{ Vector2f(-5.0f,-10.0f),Vector2f(320.0f,-10.0f), Vector2f(615.0f,-10.0f), Vector2f(0.0f,470.0f), Vector2f(320.0f,470.0f), Vector2f(632.5f,470.0f) };
	Holes test = { r , pos };
	//game loop
	while (window.isOpen()) {
		//window closure
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}

		}


		//////// Drawing  ////////
		window.clear(Color::Green);
		//------------------------------------------

		test.draw(window);

		//------------------------------------------
		window.display();


	}

	return 0;
}