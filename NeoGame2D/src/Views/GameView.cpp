#include "GameView.h"

GameView::GameView() {
    // Initialize game visual elements
    this->window.create(sf::VideoMode(800, 600), "my game");
}

void GameView::draw() {
    // Draw game visual elements on the window
    this->window.clear();

    this->window.display();
}

bool GameView::isOpen() {
    return this->window.isOpen();
}

void GameView::handleEvent() {
    // Handle user input events
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

}