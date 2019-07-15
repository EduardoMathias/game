//this is just a test

#include "base/render/screen.hpp"

int main()
{
    Game::Screen screen(400, 400, "Testing");
    auto window = screen.createWindow();
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        window->display();
    }
}