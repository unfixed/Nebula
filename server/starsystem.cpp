#include<stack>
#include "mapitem.h"
#include "fleet.h"
#include "starsystem.h"

using namespace std;

StarSystem::StarSystem(int input_id, std::string input_name, int input_resources, int input_location_x, int input_location_y, int input_owner_id)
{
  setID(input_id);
  setName(input_name);
  setResources(input_resources);
  setLocation(input_location_x, input_location_y);
  setSize(0);
  setOwner(input_owner_id);
  //Fleets = new Fleets [1];  //TODO: modify to stack

}


int StarSystem::getResources()
{
  return resources;
}



void StarSystem::setResources(int input_resources)
{
  resources = input_resources;
}

void StarSystem::addFleet(Fleet& input_fleet)
{
  //TODO: implement stack
  int b =0;
}

void StarSystem::removeFleet(int input_id_fleet)
{
  //TODO: implement stack manipulation code, to remove a 
  int a = 0;

}
