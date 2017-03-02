#include "SFML\Graphics.hpp"


int main(int argc, char** argv)
{
	sf::RenderWindow renderWindow(sf::VideoMode(640, 480), "Sprites Demo");

	sf::Event event;

	sf::Texture texture;
	texture.loadFromFile("images/megaman.png");

	sf::Sprite sprite(texture);

	while (renderWindow.isOpen()) {
		while (renderWindow.pollEvent(event)) {
			if (event.type == sf::Event::EventType::Closed)
				renderWindow.close();
		}
		renderWindow.clear();
		renderWindow.draw(sprite);
		renderWindow.display();
	}
	
}