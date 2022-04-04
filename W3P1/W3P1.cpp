#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string choice;
    vector<string> shoppingList;
    while (true) {
        cout << "(add) an item to the list, (display) the list, (remove) an item from the list, or (quit) the program" << endl;
        cin >> choice;
        if (choice == "add") {
            cout << "what do you want to add? ";
            cin >> choice;
            cout << endl;
            shoppingList.push_back(choice);   
        } else if (choice == "display") {
            cout << endl;
            for (int i = 0; i < shoppingList.size(); i++) {
                cout << shoppingList[i] << endl;
            }
            cout << endl;
        } else if (choice == "remove") {
            cout << "what do you want to remove?";
            cin >> choice;
            cout << endl;
            shoppingList.erase(remove(shoppingList.begin(), shoppingList.end(), choice), shoppingList.end());
        } else if (choice == "quit") {
            break;
        }
    }
}