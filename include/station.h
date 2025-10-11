#ifndef STATION_H
#define STATION_H

#include <string>

class Station {
public:
  int id;
  std::string name;
  // TODO: Add bus data structure

  Station(int id, const std::string &name);

  void add_bus(int bus_id);
  void remove_bus(int bus_id);
};

#endif // STATION_H
