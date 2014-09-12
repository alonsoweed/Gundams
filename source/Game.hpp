#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <string>

class Game
{

private:
	sf::RenderWindow main_window;
	sf::CircleShape first_player;	
	bool moving_left;
	bool moving_right;
	bool moving;
	sf::Texture main_texture;
	sf::Sprite main_sprite;
	sf::Image main_image;
	sf::Music main_music;

public:
	Game();
	~Game();
	void run();
	
private: 
	void process_events();
	void update(sf::Time &);	
	void render();
	void handle_input_keyboard(sf::Keyboard::Key, bool);
	void handle_input_mouse(sf::Mouse::Button, bool);






};
