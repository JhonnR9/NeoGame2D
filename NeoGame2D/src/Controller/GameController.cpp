#include "GameController.h"

GameController::GameController(GameModel& model, GameView& view)
    : m_model(model), m_view(view) {
    // Initialize controller data
    // ...
}

void GameController::run() {
    // Main game loop
    const float targetFrameTime = 1.0f / 60.0f;
    sf::Clock clock;
    float accumulator = 0.0f;

    while (m_view.isOpen()) {
   
        m_model.update();

        float deltaTime = clock.restart().asSeconds();
        accumulator += deltaTime;
        while (accumulator >= targetFrameTime)
        {
            // Update the game logic at fixed time steps
            accumulator -= targetFrameTime;
        }

        // Update view
        m_view.draw();
        m_view.handleEvent();
    }
    
}