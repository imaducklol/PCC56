#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

int main () {
    // Setup
    mt19937 generator(time(NULL));
    uniform_int_distribution<int> ztoh(0, 100);
    int count;

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

    // Sorting
    int index;
    int hold;
    for (int i = 0; i < count; i++) {
        index = i; 
        while (index > 0 && numbersToSort[index] < numbersToSort[index - 1]) {
            hold = numbersToSort[index];
            numbersToSort[index] = numbersToSort[index - 1];
            numbersToSort[index - 1] = hold;
            index--;
            
        }
    }

    // Checking and output
    cout << "mine {";
    for (int i = 0; i < count; i++) cout << numbersToSort[i] << ",";
    cout << "}\n";

    sort(copyForChecking, (copyForChecking + count));

    cout << "copy {";
    for (int i = 0; i < count; i++) cout << copyForChecking[i] << ",";
    cout << "}\n";
}
