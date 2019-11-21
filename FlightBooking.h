//
// Created by Baldur Briem on 19/09/2019.
//

#ifndef FLIGHTBOOKING_FLIGHTBOOKING_H
#define FLIGHTBOOKING_FLIGHTBOOKING_H


class FlightBooking {
public:
    FlightBooking();
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    int getId() const;

private:
    int id;
    int capacity;
    int reserved;

    bool reserveSeats(int number_of_seats);

    bool cancelReservations(int number_of_seats);
};


#endif //FLIGHTBOOKING_FLIGHTBOOKING_H
