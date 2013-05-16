#include <string>
#include "mapitem.h"

class Fleet : public MapItem

{
public:
  Fleet(int input_id, std::string input_name, int input_size, int input_location_x, int input_location_y, int input_owner_id);

  //TODO: create algorithm to map a fleet's location if in jump.
  void getLocation(int& input_location_x, int& input_location_y);

private:
  bool in_jump;
  int jump_destination_id;

};

