//this is just a test

#include "base/render/screen.hpp"

int main()
{
    Game::Screen screen(400, 400, "Testing");
    auto window = screen.createWindow();
    while (window->isOpen())
    {
        screen.checkIfClosed(window);
        window->clear();
        window->display();
    }
}