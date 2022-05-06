#include <cmath>
#include <functional>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

bool compareFunction (string a, string b) {return a < b;} 

int main () {
    fstream file;
    file.open ("./PileOWords.txt");
    string line;

    while (getline(file,line)) {
        vector<string> words;
        string temp;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') continue;

            if (line[i] == ',') {
                words.push_back(temp);
                temp = "";
                continue;
            }
            else {
                temp.push_back(line[i]);
            }
        }
        words.push_back(temp);

        sort(words.begin(), words.end(), compareFunction);

        for (string word : words) {
            cout << word << " ";
        }
        cout << endl << endl;
    }



}