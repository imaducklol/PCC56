#include <iostream>

using namespace std;

int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int F = 0;
    int inputCount = 0;
    while (true) {
        int input;
        float sum;
        cin >> input;
        if (input == -1) {
            sum = sum / inputCount;
            cout << "average = " << sum << endl;
            break;
        }
        sum += input;
        if (input > 89) {
            A += 1;
        } else if (input > 79) {
            B += 1;
        } else if (input > 69) {
            C += 1;
        } else if (input > 64) {
            D += 1;
        } else {
            F += 1;
        }
        inputCount += 1;
    }

    cout 
    << "As " << A << endl
    << "Bs " << B << endl
    << "Cs " << C << endl
    << "Ds " << D << endl
    << "Fs " << F << endl;
}