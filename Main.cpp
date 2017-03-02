#include "SFML\Graphics.hpp";
#include <iostream>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "First SFML Game");

	sf::Clock clock;

	sf::Time time;

	std::cout << time.asSeconds() << std::endl;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) 
				window.close();
			
		}

		time = clock.restart();
		std::cout << time.asSeconds() << std::endl;
		

		window.display();
	}
	
}