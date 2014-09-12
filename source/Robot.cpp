#include "Robot.hpp"
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

Robot::Robot()
{
	if( !robot_texture.loadFromFile("../images/spriteMOD.png") )
	{
		std::clog << "Error loading bomb texture";
	}
	else
	{
		robot_sprite.setTexture(robot_texture);
	}
	

}

/*
Robot::~Robot()
{

}
*/
