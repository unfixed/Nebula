#pragma once
#include "gameobject.h"

class MapItem : public GameObject

{
public:
  virtual int getSize();
  virtual int getOwner();
  virtual void getLocation(int& input_location_x, int& input_location_y);

  virtual void setSize(int input_size);
  virtual void setOwner(int input_owner_id);
  virtual void setLocation(int input_location_x, int input_location_y);

private:
  int size;
  int owner_id;
  int location_x;
  int location_y;

};
