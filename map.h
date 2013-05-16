#pragma once
#include "gameobject.h"

class Map : public GameObject

{
public:
  Map(int id, )
  virtual void getSize(int& input_size_x, int& input_size_y);
  virtual void getLocation(int& input_location_x, int& input_location_y);

  virtual void setSize(int input_size);
  virtual void setOwner(int input_owner_id);
  virtual void setLocation(int input_location_x, int input_location_y);

private:
  int size_x;
  int size_y;
  int* playerlist;
  int location_x;
  int location_y;

};
