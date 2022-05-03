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
    cout << "Welcome! Please enter positive integers separated with commas!\n";
    string numbersString;
    getline(cin, numbersString);

    // Separating into vector
    vector<int> numbers;
    string temp;
    for (int i = 0; i < numbersString.length(); i++) {
        if (numbersString[i] == ' ') continue;

        if (numbersString[i] == ',') {
            numbers.push_back(stoi(temp));
            temp = "";
            continue;
        }
        else {
            temp.push_back(numbersString[i]);
        }
    }
    numbers.push_back(stoi(temp));

    // Formatting and multiplying vector
    sort(numbers.begin(), numbers.end());
    //PrintVector(numbers);

    for (int i = 0; i < numbers.size(); i++) {
        numbers[i] *= numbers[numbers.size()-1];
    }
    PrintVector(numbers);
    
}