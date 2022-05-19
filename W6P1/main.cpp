#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

void displayBoard (string (&b)[3][3]) {
    cout << b[0][0] << "|" << b[1][0] << "|" << b[2][0] << endl;
    cout << "-" << "+" << "-" << "+" << "-" << endl;
    cout << b[0][1] << "|" << b[1][1] << "|" << b[2][1] << endl;
    cout << "-" << "+" << "-" << "+" << "-" << endl;
    cout << b[0][2] << "|" << b[1][2] << "|" << b[2][2] << endl;
    cout << "-" << "+" << "-" << "+" << "-" << endl;
}

bool checkBoard (string (&b)[3][3], string check) {
    // Horizontal
    for (int y = 0; y < 3; y++) {
        for (int x= 0; x < 3; x++) {
            if (b[x][y] != check) break;
            if (x == 2) return true;
        }
    }
    // Vertical
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            if (b[x][y] != check) break;
            if (y == 3) return true;
        }
    } 
    // Diagonal
    int y;
    for (int x = 0; x < 3; x++) {
        y = x;
        if (b[x][y] != check) break;
        if (x == 3) return true;
    }
    // Anti Diagonal
    // Diagonal
    for (int x = 3; x > 0; x--) {
        y = x;
        if (b[x][y] != check) break;
        if (x == 0) return true;
    } 
    return false;
}

int main () {
    // Setup
    string board[3][3];
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            board[x][y] = to_string(y * 3 + x + 1);
        }
    }

    /* for (int i = 0; i < 3; i++) {
        board[i][0] = "X";
    }
    cout << checkBoard(board, "X"); */

    // Play
    bool running = true;
    string player = "X";
    int choice;
    while (running) {
        while (true) {
            cout << "It is player " << player << "'s turn, please select a number\n";
            displayBoard(board);
            cin >> choice;
            if (board[(choice-1)%3][(choice-1)/3] != "O" && board[(choice-1)%3][(choice-1)/3] != "X" &&
            1 <= choice && choice <= 9) break;
            else cout << "That's not valid\n";
        }
        board[(choice-1)%3][(choice-1)/3] = player;
        if (checkBoard(board, player)) {
            running = false;
            cout << "Player " << player << " won!";
        }
        player == "X" ? player = "O" : player = "X";

        
        
    }

}