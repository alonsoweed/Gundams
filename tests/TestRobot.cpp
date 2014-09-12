#include "Bomb.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp> 
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080,720), "Fuck you, Pavel",sf::Style::Default );
	Bomb bomb;
	window.draw(bomb.get_sprite() );
	while(window.isOpen() )
	{
		std::cout << "Pavel marica";		
		sf::Event event;
		while( window.pollEvent(event) )
		{
			std::cout << "Huaroto marica ";		
			if( event.type == sf::Event::Closed:)
				window.close();

		}
	
	}
	
	return 0;
}


