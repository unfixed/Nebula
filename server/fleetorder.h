#pragma once

class FleetOrder

{
public:
  FleetOrder(int input_type_of_order, int input_value_of_order);
  int getFleetOrderType();
  int getFleetOrderValue();
private:
  int type_of_order;
  int value_of_order;
  

};
