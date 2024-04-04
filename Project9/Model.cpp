#include "Model.h"

using namespace std;
CaroModel::CaroModel() {
    initializeBoard();
    currentPlayer = 'X'; // Người chơi 'X' đi trước
    gameOver = false; // Trò chơi chưa kết thúc
}

void CaroModel::initializeBoard() {
    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardSize; ++j) {
            board[i][j] = ' ';
        }
    }
}

void CaroModel::displayBoard() {
    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < boardSize; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool CaroModel::placeMove(int row, int col) {
    if (row < 0 || row >= boardSize || col < 0 || col >= boardSize || board[row][col] != ' ') {
        return false;
    }

    board[row][col] = currentPlayer;

    if (checkWin(row, col)) {
        gameOver = true;
    }
    else {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return true;
}

bool CaroModel::checkWin(int row, int col) {
    char player = board[row][col];
    int count = 0;

    // Kiểm tra hàng ngang
    for (int j = 0; j < boardSize; ++j) {
        if (board[row][j] == player) {
            count++;
        }
    }
    if (count == boardSize) {
        return true;
    }

    // Kiểm tra hàng dọc
    count = 0;
    for (int i = 0; i < boardSize; ++i) {
        if (board[i][col] == player) {
            count++;
        }
    }
    if (count == boardSize) {
        return true;
    }

    // Kiểm tra đường chéo chính
    if (row == col) {
        count = 0;
        for (int i = 0; i < boardSize; ++i) {
            if (board[i][i] == player) {
                count++;
            }
        }
        if (count == boardSize) {
            return true;
        }
    }

    // Kiểm tra đường chéo phụ
    if (row + col == boardSize - 1) {
        count = 0;
        for (int i = 0; i < boardSize; ++i) {
            if (board[i][boardSize - 1 - i] == player) {
                count++;
            }
        }
        if (count == boardSize) {
            return true;
        }
    }

    return false;
}

bool CaroModel::isGameOver() {
    return gameOver;
}

char CaroModel::getCurrentPlayer() {
    return currentPlayer;
}

char(*CaroModel::getBoard())[boardSize]
    {
        return board;
    }

