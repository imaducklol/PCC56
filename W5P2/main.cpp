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
    cout << "Welcome! Please enter integers separated with commas!\n";
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

    sort(numbers.begin(), numbers.end());
    

    int neg1 = numbers[0];
    int neg2 = numbers[1];
    int pos1 = numbers[numbers.size()-1];
    int pos2 = numbers[numbers.size()-2];
    
    if (neg1 * neg2 > pos1 * pos2) {
        cout << "(" << neg1 << "," << neg2 << "): " << neg1 * neg2 << endl; 
    } else cout << "(" << pos1 << "," << pos2 << "): " << pos1 * pos2 << endl; 
}