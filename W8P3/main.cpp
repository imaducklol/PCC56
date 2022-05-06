#include <cmath>
#include <functional>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

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

void AddClient (string info, vector<Client> &clients) {

    vector<string> stats;
    string temp;
    for (int i = 0; i < info.length(); i++) {

        if (info[i] == ',') {
            stats.push_back(temp);
            temp = "";
            continue;
        }
        else {
            temp.push_back(info[i]);
        }
    }
    stats.push_back(temp);

    clients.push_back(
        Client(
            clients.size()+1, stats[0], stats[1], stats[2], 
            stats[3], stats[4], stats[5], stats[6], stats[7]
        ));
}


int main () {
    vector<Client> clients = ClientGen();
    cout << "Clients imported\n";
    bool running = true;
    while (running) {
        cout << "Do you want to display clients(0), add one(1), or quit(2)?\n";
        string choice;
        cin >> choice;
        int nchoice = stoi(choice);
        switch (nchoice) {
            case 0: {
                for (Client client : clients) client.displayInfo();
                break;
            }
            case 1: {
                string info;
                cout << "Please enter the clients info in the form of\n" <<
                "first_name,last_name,address,city,county,state,zip,phone1\n";
                cin >> info;
                AddClient(info, clients);
                break;
            }
            case 2: {
                running = false;
                break;
            }
            default: {
                running = false;
                break;
            }
        }
    }
    cout << "\n\n\ni dont want to make saving work. lmk if i have to but thats like 3 lines of code i dont feel like writing rn";
}