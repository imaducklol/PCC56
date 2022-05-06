#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;


class Ship {
    public:
        string name;
        int fuelLevel;
        int distanceMoved;

        Ship (string iName = "ship", int iFuelLevel = 100) {
            name = iName;
            fuelLevel = iFuelLevel;
        }
        void reportStatus () {
            cout << name << " is running at a fuel level of " 
            << fuelLevel << " and has moved " << distanceMoved 
            << endl;
        }
        void move (int distance) {
            if (distance > fuelLevel) 
            cout << "Not enough fuel for journey\n";
            else {
                fuelLevel -= distance;
                distanceMoved += distance;
                reportStatus();
            }
        }
        void fillMeUp (int fuelAmount) {
            fuelLevel += fuelAmount;
            cout << name << " filled up by " << fuelAmount 
            << endl;
            reportStatus();
        }
};

int main () {
    Ship SantaMaria("SantaMaria", 300);
    Ship Dinghy("Old Peter", 25);
    Ship Default;

    SantaMaria.reportStatus();
    Dinghy.reportStatus();
    Default.reportStatus();

    SantaMaria.move(250);
    SantaMaria.move(100);
    SantaMaria.fillMeUp(75);
    SantaMaria.move(100);

    Dinghy.move(10);
    Dinghy.fillMeUp(2000000);
    Dinghy.move(10000);
}