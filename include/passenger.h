#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
public:
    int id;
    std::string name;
    int bus_id;

    Passenger(int id, const std::string& name);
};

#endif // PASSENGER_H
