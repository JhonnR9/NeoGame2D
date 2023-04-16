#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class GameView
{
public:
    GameView();

    void draw();
    bool isOpen();
    void handleEvent();
   
private:
    // Game visual elements (sprites, text, etc.)
    sf::RenderWindow  window;
};

