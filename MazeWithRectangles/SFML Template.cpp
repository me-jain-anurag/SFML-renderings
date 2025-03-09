#include <SFML/Graphics.hpp>

const unsigned int ROWS = 10;
const unsigned int COLS = 10;
const float CELL_SIZE = 40.f;

int maze[ROWS][COLS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 1, 0, 0, 0, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 1, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int main() {

    unsigned int WIDTH = COLS * static_cast<int>(CELL_SIZE);
    unsigned int HEIGHT = ROWS * static_cast<int>(CELL_SIZE);


    sf::RenderWindow window(sf::VideoMode({ WIDTH, HEIGHT }), "MAZE RENDERER");

    while (window.isOpen()) {

        while (const std::optional event = window.pollEvent()) {

            if (event->is<sf::Event::Closed>())
                window.close();
            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {

                if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
                    window.close();
            }
        }

        //RENDERING
        window.clear(sf::Color::White);
        //DRAWING
        for (int row = 0; row < ROWS; row++) {

            for (int col = 0; col < COLS; col++) {

                sf::RectangleShape cell({ CELL_SIZE, CELL_SIZE });
                cell.setPosition({ col * CELL_SIZE, row * CELL_SIZE });

                if (maze[row][col] == 1) {

                    cell.setFillColor(sf::Color::Black);
                }

                else {

                    cell.setFillColor(sf::Color::White);
                    cell.setOutlineColor(sf::Color::Black);
                    cell.setOutlineThickness(1.f);
                }

                window.draw(cell);
            }
        }




        window.display();
    }

    return 0;
}
