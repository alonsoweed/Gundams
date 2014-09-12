#include "Game.hpp"
#include <SFML/Graphics.hpp>


Game::Game(): main_window( sf::VideoMode(640, 480), "Fucking Game") 
{
	





}


void Game::run()
{
	while( main_window.isOpen() )
	{
		proceess_events();
		update();
		render();
	}

	return;
}
