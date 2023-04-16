#pragma once
#include "../Models/GameModel.h"
#include "../Views/GameView.h"


class GameController
{
public:
    GameController(GameModel& model, GameView& view);
    void run();
    
private:
    GameModel& m_model;
    GameView& m_view;
    
};

