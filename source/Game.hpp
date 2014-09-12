class Game
{

private:
	sf::RenderWindow main_window;
	
public:
	Game();
	~Game();
	void run();
	
private: 
	void process_events();
	void update();	
	void render();
	









};
