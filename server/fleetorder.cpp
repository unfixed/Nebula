#include "fleetorder.h"
using namespace std;

FleetOrder::FleetOrder(int input_type_of_order, int input_value_of_order)
{
  type_of_order = input_type_of_order;
  value_of_order = input_value_of_order;
}

int FleetOrder::getFleetOrderType()
{
  return type_of_order;
}
int FleetOrder::getFleetOrderValue()
{
  return value_of_order;
}
