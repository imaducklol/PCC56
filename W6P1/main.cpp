#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

bool checkBoard (string (&b)[3][3], string check) {
    // Horizontal
    for (int y = 0; y < 3; y++) {
        for (int x= 0; x < 3; x++) {
            if (b[x][y] != check) break;
            if (x == 3) return true;
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

void displayBoard (string (&b)[3][3]) {
    cout << b[0][0] << "|" << b[1][0] << "|" << b[2][0] << endl;
    cout << "-" << "+" << "-" << "+" << "-" << endl;
    cout << b[0][1] << "|" << b[1][1] << "|" << b[2][1] << endl;
    cout << "-" << "+" << "-" << "+" << "-" << endl;
    cout << b[0][2] << "|" << b[1][2] << "|" << b[2][2] << endl;
    cout << "-" << "+" << "-" << "+" << "-" << endl;
}

int main () {
    // Setup
    string board[3][3];
    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            board[x][y] = to_string(y * 3 + x + 1);
        }
    }

    // Play
    bool running = true;
    char player = 'X';
    int choice;
    while (running) {

        while (true) {
            cout << "It is player X's turn, please select a number\n";
            displayBoard(board);
            cin >> choice;
            if (choice != 'O' && choice != 'X' &&
            1 <= choice && choice <= 9) break;
            else cout << "That's not valid\n";
        }
        break;
        
    }

}