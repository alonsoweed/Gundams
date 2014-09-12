#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <string>

class Game
{

private:
	sf::RenderWindow main_window;
	sf::CircleShape first_player;	

public:
	Game();
	//~Game();
	void run();
	
private: 
	void process_events();
	void update();	
	void render();
	






};
