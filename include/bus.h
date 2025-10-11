#ifndef BUS_H
#define BUS_H

#include "passenger.h"
#include "station.h"
#include <string>

class Bus {
public:
  int id;
  std::string name;
  double price;
  int station_id;
  // TODO: Add passenger data structure

  Bus(int id, const std::string &name, double price);

  void move_to_station(int source_station_id, int destination_station_id,
                       Station &stations);
  void add_passenger(const Passenger &passenger);
  void remove_passenger(const Passenger &passenger);
  Passenger *find_passenger(int passenger_id);
};

#endif // BUS_H
