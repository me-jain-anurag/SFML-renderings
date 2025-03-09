#include <SFML/Graphics.hpp>
#include <optional>

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "SFML 3.0 Template");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
            {
                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    window.close();
            }
        }

        window.clear(sf::Color(0xFF8800FF)); // Orange background
        window.display();
    }

    return 0;
}
