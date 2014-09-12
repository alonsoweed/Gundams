#include "Bomb.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>

Bomb::Bomb()
{
	if( !bomb_texture.loadFromFile("../images/bomb.png") )
	{
		std::cout << "Error loading bomb texture";
	}
	else
	{
		bomb_sprite.setTexture(bomb_texture);
		bomb_sprite.setPosition(0.0, 0.0);
	}




}

sf::Sprite & Bomb::get_sprite()
{

	return bomb_sprite;
	

}


/*Bomb::~Bomb()
{



}
*/



