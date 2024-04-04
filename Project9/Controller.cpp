#include "Controller.h"

void CaroController::playGame()
{
    while (!model.isGameOver()) {
        view.displayBoard(model.getBoard());
        char currentPlayer = model.getCurrentPlayer();
        int row, col;
        view.displayMessage("Player "+ string(1, currentPlayer) + "'s turn. Enter row and column (0-9): ");
        cin >> row >> col;
        if (!model.placeMove(row, col)) {
            view.displayMessage("Invalid move. Try again.");
        }
        system("cls");
    }
    view.displayBoard(model.getBoard());
    char winner = model.getCurrentPlayer() == 'X' ? 'O' : 'X';
    view.displayMessage("Player " + string(1, winner) + " wins!");
}
