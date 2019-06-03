#include <SFML/Graphics.hpp>
#include <vector>

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	std::vector<sf::Texture> Tiles;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		for(int i=0;i<10;i++)
		{
			for(int j = 0 ;j<10;j++)
			{
				window.draw()
			}
		}
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}