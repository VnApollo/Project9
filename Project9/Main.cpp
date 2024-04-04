#include <iostream>
#include "Model.h"
#include "View.h"
#include "Controller.h"

int main() {
    string player1, player2;
    cout << "Player1: ";
    cin >> player1;
    cout << "Player2: ";
    cin >> player2;
    CaroModel model;
    CaroView view;
    CaroController controller;

    controller.playGame();

    return 0;
}