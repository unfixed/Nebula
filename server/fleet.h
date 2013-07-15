#pragma once
#include <string>
#include <deque>
#include "mapitem.h"
#include "fleetorder.h"
class Fleet : public MapItem

{
public:
  Fleet();
  Fleet(int input_id, std::string input_name, int input_size, int input_location_x, int input_location_y, int input_owner_id);

//  Fleet& operator= (Fleet& input_fleet);


  //TODO: create algorithm to map a fleet's location if in jump.
  void getLocation(int& input_location_x, int& input_location_y);

  void processOrders();

  void giveNewFleetOrder(int input_type_of_order, int input_value_of_order);
  void removeLastGivenFleetOrder();
  void completedFleetOrder();

  void getShipsFromStar(int input_number_of_ships);

private:
  bool processing_orders;
  bool in_jump;

  int jump_destination_id;
  std::deque<FleetOrder> fleet_orders;

};
