#pragma once

#include <string>
#include <memory>
#include <SFML/Graphics.hpp>

namespace Game
{
class Screen
{
public:
    explicit Screen(const int width, const int height, const std::string title);
    explicit Screen();
    std::shared_ptr<sf::RenderWindow> createWindow() const;
    void render() const;
    void renderText(const float x, const float y, std::string text) const;
    void checkIfClosed(std::shared_ptr<sf::RenderWindow> window) const;
protected:
    int width;
    int height;
    std::string title;

private:
    static constexpr int INTERVAL = 1000 / 60; // should be 60 fps
};
} // namespace Game
