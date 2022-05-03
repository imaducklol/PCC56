#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

bool validateWalk(int minutes, string directions) {
    int ns = 0;
    int we = 0;
    int t = 0;
    for (int i = 0; i < directions.length(); i++) {
        if (directions[i] == ' ') continue; 
        if (directions[i] == 'n') ns++; 
        if (directions[i] == 's') ns--; 
        if (directions[i] == 'w') we++; 
        if (directions[i] == 'e') we--; 
        t++;
    }

    cout << ns << endl;
    cout << we << endl;
    cout << t << endl;

    if (abs(ns) + abs(we) == 0 && t == minutes) cout << "We get back to the same spot in " << minutes << " minutes";
    if (abs(ns) + abs(we) != 0 && t == minutes) cout << "We take a " << minutes << " minute walk but don't get back to the start";
    if (abs(ns) + abs(we) == 0 && t > minutes)  cout << "The path gets you back, but in more than " << minutes <<" minutes";
    if (abs(ns) + abs(we) == 0 && t < minutes)  cout << "The path gets you back, but in less than " << minutes <<" minutes";
    if (abs(ns) + abs(we) != 0 && t != minutes) cout << "We get to the wrong spot in the wrong number of minutes. Everything has failed";
    cout << endl << endl;
    if (abs(ns) + abs(we) == 0 && t == minutes) return true;
    else return false;
}


int main () {
    // Input
    cout << "Welcome! Please enter directions (n s w e) separated with spaces!\n";
    string directions;
    getline(cin, directions);

    cout << "Time to spend?\n";
    int minutes;
    cin >> minutes;
    
    cout << validateWalk(minutes, directions);
}