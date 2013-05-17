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
}


//TODO: location corresponds to either the star the fleet is currently on
// or the location a fleet is in between jumps.
void Fleet::getLocation(int& input_location_x, int& input_location_y)
{
  MapItem::getLocation(input_location_x, input_location_y);
}
