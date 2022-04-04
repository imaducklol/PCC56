#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main() {
    string choice; 
    int quantity;
    int nm;
    vector<string> stars;
    mt19937 generator(time(NULL));
    uniform_int_distribution<int> uniform(0,100);
    normal_distribution<float> normal(50,10);
    geometric_distribution<int> geometric(.05);

 
    cout << "uniform, normal, or geometric?\n";
    cin >> choice;

    cout << "how many numbers do you want between 0 and 100\n";
    cin >> quantity;

    for (int i = 0; i < 11; i++) stars.push_back("");

    for (int i = 0; i < quantity; i++) {
        if (choice == "uniform") {
            nm = uniform(generator)/10;
            stars[nm] += "*";
        } else if (choice == "normal") {
            nm = normal(generator)/ 10;
            stars[nm] += "*";
        } else if (choice == "geometric") {
            nm = geometric(generator)/ 10;
            stars[nm] += "*";
        } 
    }

    for (int i = 0; i < 10; i++) {
        cout << i << "0 - " << i << "9 : " << stars[i] << endl;
    }
    cout << "    100 : " << stars[10] << endl;
}