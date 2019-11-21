#include <iostream>
#include "FlightBooking.h"
#include "Flights.h"
#include <sstream>

using namespace std;

int main() {
    int id, n;
    string command = "", usrEntry;
    Flights flights = Flights();

    do {
        cout << "What would you like to do?: " << endl;
        getline(cin, usrEntry);

        stringstream ss;
        ss << usrEntry;
        ss >> command >> id >> n;

        if (command == "add") {

        }
        else if (command == "create") {
            flights.AddFlight(FlightBooking(id, n, 0));
        }
        else if (command == "print") {
            flights.Print();
        }
        else if (command == "delete") {

        }
        else if (command == "cancel") {

        }
        else {
            cout << "Invalid command" << endl;
        }
    } while (command != "quit");
    return 0;
}