#include "fleet.h"
using namespace std;

Fleet::Fleet()
{

}
Fleet::Fleet(int input_id, std::string input_name, int input_size, int input_location_x, int input_location_y, int input_owner_id)
{
  setID(input_id);
  setName(input_name);
  setSize(input_size);
  setOwner(input_owner_id);
  setLocation(input_location_x, input_location_y);
  in_jump = false;
}
/*
Fleet& Fleet::operator= (Fleet& input_fleet)
{
  setID(input_fleet.getID());
  setName(input_fleet.getName());
  setSize(input_fleet.getSize());
  setOwner(input_fleet.getOwner());
  int x,y;
  input_fleet.getLocation(x,y);
  setLocation(x,y);
  in_jump = false;
  return *this;
}
*/

//TODO: location corresponds to either the star the fleet is currently on
// or the location a fleet is in between jumps.
void Fleet::getLocation(int& input_location_x, int& input_location_y)
{
  MapItem::getLocation(input_location_x, input_location_y);
}

void Fleet::processOrders()
{
  //check if fleet is mid-jump or otherwise carrying out an order
  if (in_jump || processing_orders)
  {
    return;
  }
  //check if next order is to jump
  if (fleet_orders.front().getFleetOrderType() == 1)
  {
    processing_orders = true;
    in_jump = true;
    jump_destination_id = fleet_orders.front().getFleetOrderValue();
  } else if (fleet_orders.front().getFleetOrderType() == 2)
  {
    getShipsFromStar( fleet_orders.front().getFleetOrderValue() );
  }
}



void Fleet::giveNewFleetOrder(int input_type_of_order, int input_value_of_order)
{
  FleetOrder newFleetOrder(input_type_of_order,input_value_of_order);
  fleet_orders.push_back(newFleetOrder  );

}
void Fleet::removeLastGivenFleetOrder()
{
  fleet_orders.pop_back();
}
void Fleet::completedFleetOrder()
{
  fleet_orders.pop_front();
}

void getShipsFromStar(int input_number_of_ships)

{
//TODO: IMplement getting ships from star

}
