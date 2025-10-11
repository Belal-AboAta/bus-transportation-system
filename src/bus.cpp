#include "bus.h"

Bus::Bus(int id, const std::string &name, double price)
    : id(id), name(name), price(price) {}

void Bus::move_to_station(int source_station_id, int destination_station_id,
                          Station &stations) {
  // TODO: Add your implementation here
}
void Bus::add_passenger(const Passenger &passenger) {
  // TODO: Add your implementation here
}

void Bus::remove_passenger(const Passenger &passenger) {
  // TODO: Add your implementation here
}

Passenger *Bus::find_passenger(int passenger_id) {
  // TODO: Add your implementation here
}
