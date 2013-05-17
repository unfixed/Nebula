#include "map.h"

Map::Map(int id, const std::vector<int>& input_starsystem_list, int input_size_x, int input_size_y)
{
  setStarSystemList(input_starsystem_list);
  setSize(input_size_x, input_size_y);
}

void Map::getStarSystemList(std::vector<int>& output_starsystem_list)
{
  output_starsystem_list = starsystem_list;
}

void Map::getSize(int& input_size_x, int& input_size_y)
{
  input_size_x = size_x;
  input_size_y = size_y;
}

void Map::setStarSystemList(const std::vector<int>& input_starsystem_list)
{
  starsystem_list = input_starsystem_list;
}

void Map::setSize(int input_size_x, int input_size_y);
{
  size_x = input_size_x;
  size_y = input_size_y;
}

void Map::generate_map()
{
  //TODO: create algorithm for map generation
}
