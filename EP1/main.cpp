#include <bits/charconv.h>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <array>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

void display(int numbersToSort[20], float time) {
    system("clear");
    for (int i = 0; i < 20; i++) {
        cout << i+1 << "\t: ";
        for (int n = 0; n < numbersToSort[i]; n++) {
            cout << "*";
        }
        cout << endl;
    }
    usleep(time * 1000000);
}

void sort1(int numbersToSort[20]) {
    int hold;
    bool swapped;
    cout << "about to display sort1 " << endl;
    display(numbersToSort, 2);
    while (true) {
        swapped = false;
        for (int i = 0; i < 20-1; i++) {
            if (numbersToSort[i] > numbersToSort[i+1]) {
                hold = numbersToSort[i];
                numbersToSort[i] = numbersToSort[i+1];
                numbersToSort[i+1] = hold; 
                swapped = true;
                display(numbersToSort, .3);

            }
        }
        if (!swapped) {
            break;
        }
    }

}

void sort2(int numbersToSort[20]) {
    int index;
    int hold;
    display(numbersToSort, 2);
    for (int i = 0; i < 20; i++) {
        index = i; 
        while (index > 0 && numbersToSort[index] < numbersToSort[index - 1]) {
            hold = numbersToSort[index];
            numbersToSort[index] = numbersToSort[index - 1];
            numbersToSort[index - 1] = hold;
            index--;
            display(numbersToSort, .3);
        }
    }

}


int main() {
    mt19937 generator(time(NULL));
    uniform_int_distribution<int> ztoh(0, 20);
    int nOn = 20;

    int numbersToSort[nOn];

    for (int i = 0; i < nOn; i++) {
        numbersToSort[i] = ztoh(generator);
    }

    int choice;
    cout << "(1) or (2): ";
    try {
    cin >> choice;
    } catch (exception &err) {
    }
    switch (choice) {
        case 1: {
            sort1(numbersToSort);
        }
        case 2: {
            sort2(numbersToSort);
        }
    }
}

