#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
int column, row;

char **boardSetup() {

//    do {
        //enter column & row
        cout << "***Welcome to connect 4!***" << endl;
        cout << "Please enter how many column do you want" << endl;
        cin >> column;
        cout << "Please enter how many row do you want" << endl;
        cin >> row;

      /*  if (column <= 4 || row <= 4) {
            cout << "Invalid input please re-enter. The board will be too small to connect 4" << endl;
        }*/

//    } while (column < 4 || row < 4);

    // fill *
    char **board = new char *[row];
    for (int i = 0; i < row; ++i) {
        board[i] = new char[column]{};
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            board[i][j] = '*';
        }
    }
    return board;
}

void boardDisplay(char **board) {
    //display

    cout << "This is your board" << endl;

    for (int i = 0; i < row; ++i) {
        cout << "|";
        for (int j = 0; j < column; ++j) {
            cout << board[i][j];
        }
        cout << "|" << endl;
    }

}

int playerTurn(char **board) {
    int dropCol;

    do {
        cout << "It is now your Turn " << endl;
        cout << "Please enter a number between 1 and " << column << endl;
        cin >> dropCol;

        //check is board is full
        while (board[0][dropCol - 1] == 'X' || board[0][dropCol - 1] == 'O') {
            cout << "Sorry the row is full please choose again: ";
            cin >> dropCol;
        }

    } while (dropCol < 1 || dropCol > column);

    return dropCol;

}

void dropCheck(char **board, int dropCol) {

    int length, turn;
    length = row - 1;
    turn = 0;

    //player drops
    do {
        if (board[length][dropCol - 1] != 'X' && board[length][dropCol - 1] != 'O') {

            board[length][dropCol - 1] = 'O';
            turn = 1;

        } else
            --length;
    } while (turn != 1);

}

bool again() {

    int restart;

    while (true) { //If play again

        cout << "Would you like to restart? Yes(1) No(2): ";
        cin >> restart;

        if (restart == 1) {
            return true;
        } else if (restart == 2) {
            cout << "Goodbye!" << endl;
            return false;
        }
        cout << "You are dumb, re-enter." << endl;

    }
}

int computerRandom(char **board) {

    int randNum;

    //computer random put
    srand(time(NULL));
    randNum = rand() % column;

    cout << "It is now PC's Turn " << endl;
//    cout << randNum << endl;
    while (board[0][randNum] == 'X' || board[0][randNum] == 'O') {
        randNum = rand() % column;
    }

    return randNum;

}


void stupidAI(char **board, int dropCol) {

    cout << "The computer decide to the place in column " << dropCol + 1 << endl;

    int length, turn;
    length = row - 1;
    turn = 0;

    //computer put
    do {
        if (board[length][dropCol] != 'X' && board[length][dropCol] != 'O') {

            board[length][dropCol] = 'X';
            turn = 1;

        } else
            --length;
    } while (turn != 1);

}

int checkNPlayer(char **board) { //check if player win

    char XO = 'O';
    int win;

    win = 0;

    for (int i = row - 1; i >= 0; --i) {

        for (int j = column - 1; j >= 0; --j) {

            if (i > 2 && j > 2) {

                // left diagonal
                if (board[i][j] == XO &&
                    board[i - 1][j - 1] == XO &&
                    board[i - 2][j - 2] == XO &&
                    board[i - 3][j - 3] == XO) {
                    win = 1;
                }
            }
            if (i > 2 && j < column - 3) {

                // right diagonal
                if (board[i][j] == XO &&
                    board[i - 1][j + 1] == XO &&
                    board[i - 2][j + 2] == XO &&
                    board[i - 3][j + 3] == XO) {
                    win = 1;
                }
            }
            if (i > 2) {

                // top
                if (board[i][j] == XO &&
                    board[i - 1][j] == XO &&
                    board[i - 2][j] == XO &&
                    board[i - 3][j] == XO) {
                    win = 1;
                }
            }
            if (j > 2) {

                // left
                if (board[i][j] == XO &&
                    board[i][j - 1] == XO &&
                    board[i][j - 2] == XO &&
                    board[i][j - 3] == XO) {
                    win = 1;
                }
            }
        }
    }
    return win;
}

int checkNPC(char **board) {//check if computer win

    char XO = 'X';
    int win;

    win = 0;

    for (int i = row - 1; i >= 0; --i) {

        for (int j = column; j >= 0; --j) {

            if (i > 2 && j > 2) {

                // left diagonal
                if (board[i][j] == XO &&
                    board[i - 1][j - 1] == XO &&
                    board[i - 2][j - 2] == XO &&
                    board[i - 3][j - 3] == XO) {
                    win = 1;
                }
            }
            if (i > 2 && j < column - 3) {

                // right diagonal
                if (board[i][j] == XO &&
                    board[i - 1][j + 1] == XO &&
                    board[i - 2][j + 2] == XO &&
                    board[i - 3][j + 3] == XO) {
                    win = 1;
                }
            }
            if (i > 2) {

                // top
                if (board[i][j] == XO &&
                    board[i - 1][j] == XO &&
                    board[i - 2][j] == XO &&
                    board[i - 3][j] == XO) {
                    win = 1;
                }
            }
            if (j > 2) {

                // left
                if (board[i][j] == XO &&
                    board[i][j - 1] == XO &&
                    board[i][j - 2] == XO &&
                    board[i][j - 3] == XO) {
                    win = 1;
                }
            }
        }
    }
    return win;
}

int fullDisplay(char **board) { //check if the board is full

    int full;
    full = 0;
    for (int i = 0; i < column; ++i) {
        if (board[0][i] != '*')
            ++full;
    }
    return full;

}

int main() { //main

    char **board;

    int dropCol2, computerChoice, win, win2, full;
    bool isRun = true;
    board = boardSetup();
    boardDisplay(board);

    do {

        //player turn
        dropCol2 = playerTurn(board);
        dropCheck(board, dropCol2);
        boardDisplay(board);

        full = fullDisplay(board); // display the full alert
        if (full == column) {
            cout << "The game is draw! No one win the game" << endl;
            isRun = again();
            if (isRun) {
                board = boardSetup();
                boardDisplay(board);
                continue;
            }
        }

        //computer turn
        computerChoice = computerRandom(board);
        stupidAI(board, computerChoice);
        boardDisplay(board);

        full = fullDisplay(board); // display the full alert
        if (full == column) {
            cout << "The game is draw! No one win the game" << endl;
            isRun = again();
            if (isRun) {
                board = boardSetup();
                boardDisplay(board);
                continue;
            }
        }

        //check if computer or player win
        win = checkNPlayer(board);
        win2 = checkNPC(board);

        //display who win
        if (win == 1) {
            cout << "Congratulation you win the game" << endl;
            isRun = again();
            if (isRun) {
                board = boardSetup();
                boardDisplay(board);
            }
        } else if (win2 == 1) {
            cout << "Sorry PC win" << endl;
            isRun = again();
            if (isRun) {
                board = boardSetup();
                boardDisplay(board);
            }
        }
    } while (isRun);
    return 0;
}
