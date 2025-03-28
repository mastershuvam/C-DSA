//class name fun with c++

#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};
int currentPlayer = 1; // Player 1 starts
char mark;

void displayBoard() {
    system("clear"); // For Linux/macOS, use "cls" for Windows
    cout << "\n Tic-Tac-Toe \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true; // Row check
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true; // Column check
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true; // Diagonal 1
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true; // Diagonal 2
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return false; // Empty spot found
        }
    }
    return true;
}

void makeMove(int move) {
    mark = (currentPlayer == 1) ? 'X' : 'O';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == (move + '0')) {
                board[i][j] = mark;
                return;
            }
        }
    }
}

bool isValidMove(int move) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == (move + '0')) return true;
        }
    }
    return false;
}

int main() {
    int move;
    while (true) {
        displayBoard();
        cout << "Player " << currentPlayer << "'s turn (Enter position 1-9): ";
        cin >> move;

        if (!isValidMove(move)) {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        makeMove(move);

        if (checkWin()) {
            displayBoard();
            cout << "Player " << currentPlayer << " wins! 🎉\n";
            break;
        }
        if (checkDraw()) {
            displayBoard();
            cout << "It's a draw! 🤝\n";
            break;
        }
        
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
    return 0;
}
