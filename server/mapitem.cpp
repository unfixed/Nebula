#include "mapitem.h"
using namespace std;

int MapItem::getSize()
{
  return size;
}
int MapItem::getOwner()
{
  return owner_id;
}
void MapItem::getLocation(int& input_location_x, int& input_location_y)
{
  input_location_x = location_x;
  input_location_y = location_y;
}
void MapItem::setSize(int input_size)
{
  size = input_size;
}
void MapItem::setOwner(int input_owner_id)
{
  owner_id = input_owner_id;
}
void MapItem::setLocation(int input_location_x, int input_location_y)
{
  location_x = input_location_x;
  location_y = input_location_y;
}

