#include "Game.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>



Game::Game(): main_window( sf::VideoMode(1080, 720), "Fucking Game", sf::Style::Default ), first_player() , moving_right(false), moving_left(false), moving(false)
{
	if( !main_image.loadFromFile("../images/sprite1.png") )
	{
		std::cout << "Error loading texture" << "\n";

	}
	else 
	{
		main_music.openFromFile("../music/music.ogg");	
		main_music.setLoop(true);
		main_music.setPitch(2);
		main_music.setVolume(80);
		main_image.createMaskFromColor( main_image.getPixel(0,0), 0  );	
		//main_image.saveToFile("../images/spriteMOD.png");	
		main_texture.loadFromFile("../images/sprite1.png");	
		main_texture.update(main_image);    	
		main_sprite.setTexture(main_texture);
		main_sprite.setPosition(0,617);
	}
	
		
		


}

void Game::handle_input_keyboard( sf::Keyboard::Key key , bool is_pressed )
{
	if (key == sf::Keyboard::Left)
		moving_left = is_pressed;
	else if (key == sf::Keyboard::Right)
		moving_right = is_pressed;		

	return;
}

void Game::handle_input_mouse( sf::Mouse::Button key, bool is_pressed)
{
	if(key == sf::Mouse::Left)
		moving = is_pressed;
	else if(key == sf::Mouse::Left)
		moving = is_pressed;

	return;

}

void Game::process_events()
{
	sf::Event event;
	while(main_window.pollEvent(event))
	{
		switch(event.type)
		{
			case sf::Event::KeyPressed:
			{
				handle_input_keyboard(event.key.code, true);
				break;
			}			
			case sf::Event::KeyReleased:
			{
				handle_input_keyboard(event.key.code, false);
				break;
			}
			case sf::Event::Closed:
			{
				main_window.close();
				break;
			}
			case sf::Event::MouseButtonPressed:
			{
				handle_input_mouse(event.mouseButton.button, true);
				break;			
			}
			case sf::Event::MouseButtonReleased:	
			{
				handle_input_mouse(event.mouseButton.button, false);
				break;			
			}			

			default: 
				break;

											

		}

	}


	return;
}

void Game::update(sf::Time & time)
{
	sf::Vector2f movement(0.0, 0.0);
	sf::Vector2f v(9.0 , -9.0);
	sf::Vector2f g(0,12.81);	
	//if(moving_left) movement.x -= 1.0;
	//if(moving_right) movement.x += 1.0;
	
	if(moving) 
	{	
		movement.x = time.asSeconds()*v.x;
		movement.y = v.y*time.asSeconds() + (0.5*time.asSeconds()*time.asSeconds())*g.y;
		main_sprite.move(movement);
		if(main_sprite.getPosition().x + movement.x > 1080 )
		{	
			main_sprite.setPosition(0,617.0);
			time = sf::seconds(0.0);
		}
	}	
	return;
}



void Game::render()
{
	main_window.clear();

	main_window.draw(main_sprite);

	main_window.display();

	return;	
}




void Game::run()
{
	main_music.play();
	sf::Time main_timer;
	sf::Clock main_clock;
	while( main_window.isOpen() )
	{
		main_timer += main_clock.restart();
		process_events();
		update(main_timer);
		render();
	}

	return;
}


Game::~Game()
{
	main_music.stop();

}

