#include "debug.hpp"
#include "vector2.hpp"
void Debug::Log(std::string str)
{
    std::cout << "\033[0;37m" << str << "\033[0m\n";
}

void Debug::LogError(std::string str)
{
    std::cout << "\033[0;31m" << str << "\033[0m\n";
}

void Debug::LogWarning(std::string str)
{
    std::cout << "\033[0;33m" << str << "\033[0m\n";
}

void Debug::LogSuccess(std::string str)
{
    std::cout << "\033[0;32m" << str << "\033[0m\n";
}

void Debug::DrawLine(Vector2 start, Vector2 end, sf::Color color, sf::RenderWindow &screen)
{
    // sf::Vertex line[] =
    // {
    //     sf::Vertex(Vector2::SFMLOriginToRelative(sf::Vector2f(start.x, start.y)), color),
    //     sf::Vertex(Vector2::SFMLOriginToRelative(sf::Vector2f(end.x, end.y)), color)
    // };

    // screen.draw(line, 2, sf::Lines);
}

void Debug::DrawRay(Vector2 start, Vector2 dir, sf::Color color, sf::RenderWindow &screen)
{
    Debug::DrawLine(start, dir, color, screen);
}
