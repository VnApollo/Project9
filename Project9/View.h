#pragma once
#ifndef CAROVIEW_H
#define CAROVIEW_H

#include <iostream>
using namespace std;

class CaroView {
public:
    static const int boardSize=10; // Kích thước của bảng cờ
    void displayBoard(char board[boardSize][boardSize]);
    void displayMessage(string message);
};

#endif // CAROVIEW_H