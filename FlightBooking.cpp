//
// Created by Baldur Briem on 19/09/2019.
//

#include "FlightBooking.h"
#include <iostream>

using namespace std;

FlightBooking::FlightBooking(int id, int capacity, int reserved) {
    this->id = id;
    this->capacity = capacity;
    this->reserved = reserved;
}
FlightBooking::FlightBooking() {
    this->id = -1;
    this->capacity = -1;
    this->reserved = -1;
}

void FlightBooking::printStatus() {
    cout << this->id << " " << this->capacity << " " << this->reserved << endl;
}


bool FlightBooking::reserveSeats(int number_of_seats)
{
    if (this->reserved + number_of_seats <= this->capacity) {
        this->reserved += number_of_seats;
        return true;
    }
    return false;
}
bool FlightBooking::cancelReservations(int number_of_seats)
{
    if (this->reserved - number_of_seats >= 0) {
        this->reserved -= number_of_seats;
        return true;
    }
return false;
}

int FlightBooking::getId() const {
    return id;
}
