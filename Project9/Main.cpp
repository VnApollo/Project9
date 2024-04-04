#include <iostream>
#include "Model.h"
#include "View.h"
#include "Controller.h"

int main() {
    CaroModel model;
    CaroView view;
    CaroController controller;

    controller.playGame();

    return 0;
}