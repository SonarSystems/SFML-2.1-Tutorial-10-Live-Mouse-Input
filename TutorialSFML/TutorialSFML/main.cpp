#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		if ( sf::Mouse::isButtonPressed( sf::Mouse::Left ) )
		{
			std::cout << "Left mouse button is bing pressed so fire fire fire" << std::endl;
		}

		//std::cout << sf::Mouse::getPosition().x << std::endl;
		std::cout << sf::Mouse::getPosition(window).x << std::endl;

		sf::Mouse::setPosition(sf::Vector2i(40, 50), window);

		window.clear( );

		window.display( );
	}
}