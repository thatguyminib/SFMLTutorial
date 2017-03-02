#include "SFML\Graphics.hpp";
#include <iostream>
#include <string>


int main()
{
	enum Direction { Left, Right };

	sf::Vector2i source(32, Right);

	sf::RenderWindow window(sf::VideoMode(800, 600), "First SFML Game");

	int index = 0;

	window.setKeyRepeatEnabled(false);

	sf::Texture pTexture;
	sf::Sprite playerImage;
	if (!pTexture.loadFromFile("Player.png")) {
		std::cout << "Error could not load player image" << std::endl;
	}

	playerImage.setTexture(pTexture);

	playerImage.setPosition(100, 100);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {

			switch (event.type) {
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Right) {
					source.y = Right;
				}
				else if (event.key.code == sf::Keyboard::Left) {
					source.y = Left;
				}
			}
		}
		
		window.draw(playerImage);
		window.display();
	}
	
}