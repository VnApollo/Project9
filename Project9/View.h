#pragma once
#ifndef VIEW_H
#define VIEW_H

#include <iostream>
using namespace std;

class CaroView {
public:
    static const int boardSize=10; // Kích thước của bảng cờ
    void displayBoard(char board[boardSize][boardSize]);
    void displayMessage(string message);
    void displayPlayer(string Player1, string Player2);
};

#endif // !VIEW_H