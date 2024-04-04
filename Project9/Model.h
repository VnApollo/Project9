#pragma once
#ifndef MODEL_H
#define MODEL_H
#include <iostream>
using namespace std;
static const int boardSize = 10; // Kích thước của bảng cờ

class CaroModel {
private:
    char board[boardSize][boardSize]; // Bảng cờ
    char currentPlayer; // Người chơi hiện tại ('X' hoặc 'O')
    bool gameOver; // Biến để kiểm tra trò chơi đã kết thúc chưa
public:
    CaroModel();
    void initializeBoard();
    void displayBoard();
    bool placeMove(int row, int col);
    bool checkWin(int row, int col);
    bool isGameOver();
    char getCurrentPlayer();
    char(*getBoard())[boardSize]; // Khai báo phương thức trả về con trỏ tới mảng hai chiều

};

#endif // MODEL_H