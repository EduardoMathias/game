#include "screen.hpp"

namespace Game
{
Screen::Screen()
{
    this->width = 640;
    this->height = 480;
    this->title = "Game";
}
Screen::Screen(const int width, const int height, const std::string title)
{
    this->width = width;
    this->height = height;
    this->title = title;
}
std::shared_ptr<sf::RenderWindow> Screen::createWindow() const
{
    std::shared_ptr<sf::RenderWindow> window(new sf::RenderWindow(sf::VideoMode(this->width, this->height), this->title));
    return window;
}
} // namespace Game
