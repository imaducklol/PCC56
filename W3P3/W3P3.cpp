#include <asm-generic/errno.h>
#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

vector<int> Uniform(int quantity);
vector<int> Normal(int quantity);
vector<int> Geometric(int quantity);

int main() {
    string choice; 
    int quantity;
    int mode;
    vector<int> starsnm;
    vector<string> stars;
 
    cout << "uniform, normal, or geometric?\n";
    cin >> choice;

    cout << "how many numbers do you want between 0 and 100\n";
    cin >> quantity;

    if (choice == "uniform") {
        starsnm = Uniform(quantity);
    } else if (choice == "normal") {
        starsnm = Normal(quantity);
    } else if (choice == "geometric") {
        starsnm = Geometric(quantity);
    } else {
        cout << "no";
        return 0;
    }

    for (int i = 0; i < 11; i++) stars.push_back("");

    for (int i = 0; i < starsnm.size(); i++) {
        if (starsnm) < 10
    }
}

vector<int> Uniform(int quantity) {
    mt19937 generator(time(NULL));
    uniform_int_distribution<int> uniform(0,100);
    vector<int> starsnm;
    int number;

    for (int i = 0; i < quantity; i++) {
        starsnm.push_back(uniform(generator));
    }

    return starsnm;
}
vector<int> Normal(int quantity){
    mt19937 generator(time(NULL));
    normal_distribution<float> normal(50,10);
    vector<int> starsnm;
    int number;

    for (int i = 0; i < quantity; i++) {
        starsnm.push_back(normal(generator));
    }

    return starsnm;
}
vector<int> Geometric(int quantity){
    mt19937 generator(time(NULL));
    geometric_distribution<int> geometric(.05);
    vector<int> starsnm;
    int number;

    for (int i = 0; i < quantity; i++) {
        starsnm.push_back(geometric(generator));
    }

    return starsnm;
}