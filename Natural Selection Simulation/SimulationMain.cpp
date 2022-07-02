#include <SFML/Graphics.hpp>


using namespace sf;

int main() {
	RenderWindow* window = new RenderWindow(VideoMode(800, 1000), "Simulation");

	window->setFramerateLimit(144);

	while (window->isOpen())
	{
		Event e;
		while (window->pollEvent(e)) {
			if (e.type == Event::Closed) {
				window->close();
			}
		}

		window->clear();
		window->display();
	}

	return 0;
}