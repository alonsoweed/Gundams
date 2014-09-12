#include "Game.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>



Game::Game(): main_window( sf::VideoMode(640, 480), "Fucking Game" ), first_player() 
{
	first_player.setRadius(25.0);
	first_player.setPosition(200.0, 240.0);
	first_player.setFillColor(sf::Color::White);




}


void Game::process_events()
{
	sf::Event event;
	while(main_window.pollEvent(event))
	{
		switch(event.type)
		{
			case sf::Event::Closed:
			{
				main_window.close();
				break;
			}
			default: 
				break;

		}

	}


	return;
}

void Game::update()
{

	return;
}


void Game::render()
{
	main_window.clear();

	main_window.draw(first_player);

	main_window.display();

	return;	
}




void Game::run()
{
	while( main_window.isOpen() )
	{
		process_events();
		update();
		render();
	}

	return;
}
