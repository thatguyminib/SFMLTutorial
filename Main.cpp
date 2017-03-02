#include "SFML\Graphics.hpp";
#include <iostream>
#include <string>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "First SFML Game");

	std::string message = "Hello my name is Cody";
	std::string display = "";

	int index = 0;

	window.setKeyRepeatEnabled(false);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) 
				window.close();

			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Return) {
					display += message[index];
					index++;
					system("cls");
					std::cout << display;
				}
			}
		}
		
		
		

		window.display();
	}
	
}