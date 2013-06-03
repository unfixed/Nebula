#include "map.h"

Map::Map(int id, int input_size_x, int input_size_y)
{
  setSize(input_size_x, input_size_y);
  generateMap();
}

void Map::getStarSystemList(std::map<StarSystem>& output_starsystem_list)
{
  output_starsystem_list = starsystem_list;
}

void Map::getSize(int& input_size_x, int& input_size_y)
{
  input_size_x = size_x;
  input_size_y = size_y;
}

void Map::setStarSystemList(const std::map<StarSystem>& input_starsystem_list)
{
  starsystem_list = input_starsystem_list;
}

void Map::setSize(int input_size_x, int input_size_y);
{
  size_x = input_size_x;
  size_y = input_size_y;
}

void Map::addStarSystem(StarSystem& input_starsystem)
{
  starsystem_list.insert(std::pair<int,StarSystem>(input_starsystem.getID(),input_starsystem));
}

void Map::generateMap()
{
  //TODO: create algorithm for map generation
  
}


