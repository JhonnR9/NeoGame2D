#include <SFML/Graphics.hpp>
#include "Models/GameModel.h"
#include "Views/GameView.h"
#include "Controller/GameController.h"

int main()
{
    GameModel model;
    GameView view;
    GameController controller(model, view);
    controller.run();

    return 0;
}