#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main () {
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
}
