#include <SFML/Graphics.hpp>

int main()
{
	unsigned int width = 640;
	unsigned int height = 400;
	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode({ width, height }), "Maze Vizualizer");
	window->setFramerateLimit(60);

	sf::CircleShape circle(64.0f);
	circle.setOrigin(circle.getGeometricCenter());
	circle.setPosition({ width / 4.0f, height / 4.0f });
	circle.setFillColor(sf::Color::Green);
	circle.setOutlineThickness(3.0f);
	circle.setOutlineColor(sf::Color::Magenta);
	circle.setPointCount(3);

	sf::RectangleShape rectangle({ 50.0f, 70.0f });
	rectangle.setOrigin(rectangle.getSize() / 2.0f);
	rectangle.setPosition({ width / 2.0f, height / 2.0f });
	rectangle.setFillColor(sf::Color::Yellow);
	rectangle.setOutlineThickness(3.0f);
	rectangle.setOutlineColor(sf::Color::Magenta);

	while (window->isOpen())
	{
		while (const std::optional event = window->pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window->close();
			else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
			{
				if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
					window->close();
			}
		}

		circle.move({ 1.0f, 1.0f });
		rectangle.move({ -1.0f, -1.0f });

		circle.setFillColor(sf::Color::Green);
		rectangle.setFillColor(sf::Color::Yellow);

		if (circle.getGlobalBounds().findIntersection(rectangle.getGlobalBounds()))
		{
			circle.setFillColor(sf::Color::Red);
			rectangle.setFillColor(sf::Color::Red);
		}


		//Rendering
		window->clear();

		//Drawing
		window->draw(circle);
		window->draw(rectangle);

		window->display();
	}

	delete window;
	return 0;
}
