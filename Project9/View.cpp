#include "View.h"

	void CaroView::displayBoard(char board[boardSize][boardSize])
	{
		for (int i = 0; i < boardSize; i++) {
			for (int j = 0; j < boardSize; j++) {
				cout << " | " << board[i][j] ;
			}
			cout << endl;

			cout<< "----------------------------------------" << endl;
		}
	}

	void CaroView::displayMessage(string message)
	{
		cout << message << endl;

	}
