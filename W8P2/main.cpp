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

class Client {
    public:
        int UserID;
        string first_name;
        string last_name;
        string address;
        string city;
        string county;
        string state;
        string zip;
        string phone1;

        Client (int iUserID, string ifirst_name, string ilast_name, 
        string iaddress, string icity, string icounty, 
        string istate, string izip, string iphone1) {
            UserID = iUserID;
            first_name = ifirst_name;
            last_name = ilast_name;
            address = iaddress;
            city = icity;
            county = icounty;
            state = istate;
            zip = izip;
            phone1 = iphone1;
        }

        void displayInfo () {
            cout << UserID << ",   "
                 << first_name << ",   "
                 << last_name << ",   "
                 << address << ",   "
                 << city << ",   "
                 << county << ",   "
                 << state << ",   "
                 << zip << ",   "
                 << phone1 << endl;
        }

};

vector<Client> ClientGen () {
    fstream file;
    file.open ("./ClientList.txt");
    string line;

    vector<Client> clients;

    bool first = true;
    while (getline(file,line)) {
        if (first) {
            first = false;
            continue;
        }

        vector<string> info;
        string temp;
        for (int i = 0; i < line.length(); i++) {

            if (line[i] == ',') {
                info.push_back(temp);
                temp = "";
                continue;
            }
            else {
                temp.push_back(line[i]);
            }
        }
        info.push_back(temp);

        clients.push_back(
            Client(
                stoi(info[0]), info[1], info[2], info[3], 
                info[4], info[5], info[6], info[7], info[8]
            ));
    }
    return clients;
}

int main () {
    vector<Client> clients = ClientGen();
    cout << "Clients imported\n" <<
    "Do you want to sort by ClientID(0) or name(1)?\n";
    int choice;
    cin >> choice;
    switch (choice) {
    case 0:
        int clientChoice;
        cout << "Please enter the ID of the client\n";
        cin >> clientChoice;
        clients[clientChoice-1].displayInfo();
        break;
    case 1:
        string name;
        cout << "Please enter the first name of the client\n";
        cin >> name;
        for (Client client : clients) 
        if (client.first_name == name) client.displayInfo();
        break;
    }
}