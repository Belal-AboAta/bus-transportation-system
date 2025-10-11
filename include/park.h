#ifndef PARK_H
#define PARK_H

#include <string>
class Park {
public:
  int id;
  std::string name;
  // TODO: Add bus data structure

  Park(int id, const std::string &name);
  void add_bus(int bus_id);
  void remove_bus(int bus_id);
};
#endif // PARK_H
