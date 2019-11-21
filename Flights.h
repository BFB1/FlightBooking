//
// Created by Baldur Briem on 03/10/2019.
//

#ifndef FLIGHTBOOKING_FLIGHTS_H
#define FLIGHTBOOKING_FLIGHTS_H

#include "FlightBooking.h"

class Flights {
private:
    FlightBooking *flights;
    int size = 2;
public:
    Flights ();
    ~Flights();

    FlightBooking FindFlightWithId (int id);
    int IndexOfFlight(int flightId);

    void AddFlight(FlightBooking);

    void Print();
};


#endif //FLIGHTBOOKING_FLIGHTS_H
