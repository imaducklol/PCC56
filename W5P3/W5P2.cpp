#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

void PrintVector(vector<int> v){
	for(int i = 0; i < v.size()-1; ++i)
		cout<<v[i]<<", ";
	cout << v[v.size()-1] << "\n";
}

int main () {
    // Input
    cout << "Welcome! Please enter integers separated with spaces!\n";
    string numbersString;
    getline(cin, numbersString);

    // Separating into vector
    vector<int> numbers;
    string temp;
    for (int i = 0; i < numbersString.length(); i++) {
        if (numbersString[i] == ',') continue;

        if (numbersString[i] == ' ') {
            numbers.push_back(stoi(temp));
            temp = "";
            continue;
        }
        else {
            temp.push_back(numbersString[i]);
        }
    }
    numbers.push_back(stoi(temp));

    sort(numbers.begin(), numbers.end());
    
    // Smallest index
    int si;
    // Smallest Difference
    int sd = INFINITY;
    for (int i = 0; i < numbers.size()-1; i++) {
        if (numbers[i+1] - numbers[i] < sd) {
            si = i;
            sd = numbers[i+1] - numbers[i];
        }
    }

    cout << "(" << numbers[si] << "," << numbers[si+1]
    << ") have the smallest difference of " << sd << endl; 
}