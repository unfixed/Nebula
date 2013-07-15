#include<iostream>
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
  fleets.insert(std::pair<int,Fleet>(input_fleet.getID(),input_fleet) );


//  cout << "added fleet with id " << input_fleet.getID() << endl;
}

void StarSystem::removeFleet(int input_id_fleet)
{
  fleets.erase(input_id_fleet);
  cout << "removed fleet with id " << input_id_fleet << endl;
}

void StarSystem::getFleets(std::map<int,Fleet>& input_fleets)
{
  input_fleets = fleets;
}
