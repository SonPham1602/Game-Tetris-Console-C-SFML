#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "GameController.h"
#include "InputHandler.h"
using namespace sf;
 

int main()
{


	/*sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	std::vector<sf::Texture> Tiles;
	Texture tex;
	Sprite s;
	tex.loadFromFile("C:\\Users\\Welcome\\Documents\\GitHub\\GameTetrisConsole\\GameTetrisSFML\\Asset\\Mockup\\background.jpg");
	s.setTexture(tex);
	s.setPosition(0, 0);
	Vector2u sizeScreen = tex.getSize();
	sf::RenderWindow window(sf::VideoMode(sizeScreen.x,sizeScreen.y), "SFML works!");

	while (window.isOpen())
	{
	sf::Event event;
	while (window.pollEvent(event))
	{
	if (event.type == sf::Event::Closed)
	window.close();
	}
	window.clear();
	window.draw(s);
	window.display();
	}
	*/
	GameController game;
	game.CreateNewGame();

	return 0;
}