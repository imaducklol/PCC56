#include <ctime>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <array>
using namespace std;

int main() {
    mt19937 generator(time(NULL));
    uniform_int_distribution<int> ztoh(0, 100);
    int count;
    int hold;
    bool swapped;

    cout << "How many random numbers?\n";
    cin >> count;

    int numbersToSort[count];
    int copyForChecking[count];

    for (int i = 0; i < count; i++) {
        numbersToSort[i] = ztoh(generator);
        copyForChecking[i] = numbersToSort[i];
    }

    cout << "{";
    for (int i = 0; i < count; i++) cout << numbersToSort[i] << ",";
    cout << "}\n";

    while (true) {
        swapped = false;
        for (int i = 0; i < count-1; i++) {
            if (numbersToSort[i] > numbersToSort[i+1]) {
                hold = numbersToSort[i];
                numbersToSort[i] = numbersToSort[i+1];
                numbersToSort[i+1] = hold; 
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    cout << "mine {";
    for (int i = 0; i < count; i++) cout << numbersToSort[i] << ",";
    cout << "}\n";

    sort(copyForChecking, (copyForChecking + count));

    cout << "copy {";
    for (int i = 0; i < count; i++) cout << copyForChecking[i] << ",";
    cout << "}\n";
}