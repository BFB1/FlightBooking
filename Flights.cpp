//
// Created by Baldur Briem on 03/10/2019.
//

#include "Flights.h"
#include <iostream>

using namespace std;

Flights::Flights() {
    this->flights = new FlightBooking[size];
}

FlightBooking Flights::FindFlightWithId(int flightId) {
    int index = IndexOfFlight(flightId);
    if (index != -1) {
        return this->flights[index];
    }
}

int Flights::IndexOfFlight(int flightId) {
    for (int i = 0; i < size; i++) {
        if (this->flights[i].getId() == flightId) {
            return i;
        }
    }
    return -1;
}

Flights::~Flights() {
    delete [] this->flights;
}

void Flights::AddFlight(FlightBooking flightBooking) {
    int index = this->IndexOfFlight(-1);
    if (index != -1) {
        this->flights[index] = flightBooking;
    }
    else {
        FlightBooking *tempArray = new FlightBooking[size * 2];
        for (int i = 0; i < size; i++) {
            tempArray[i] = this->flights[i];
        }
        delete [] this->flights;
        this->flights = tempArray;
        size *= 2;
        this->AddFlight(flightBooking);
    }
}

void Flights::Print() {
    for (int i = 0; i < size; i++) {
        if (this->flights[i].getId() == -1) return;
        this->flights[i].printStatus();
    }
}
