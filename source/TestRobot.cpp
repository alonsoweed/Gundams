#include "../source/Bomb.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp> 

int main()
{
	sf::RenderWindow window(sf::VideoMode(1080,720), "Fuck you, Pavel",sf::Style::Default );
	Bomb bomb;
	window.draw(bomb.get_sprite() );
	
	return 0;
}


