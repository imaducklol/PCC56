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

        Ship (string iName = "ship", int iFuelLevel = 100) {
            name = iName;
            fuelLevel = iFuelLevel;
        }
        void reportStatus () {
            cout << name << " is running at a fuel level of " 
            << fuelLevel << endl;
        }
};

int main () {
    Ship SantaMaria("SantaMaria", 300);
    Ship Dinghy("Old Peter", 25);
    Ship Default;

    SantaMaria.reportStatus();
    Dinghy.reportStatus();
    Default.reportStatus();
}