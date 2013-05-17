#include "map.h"

Map::Map(int id, const std::vector<int>& input_player_list, int input_size_x, int input_size_y)
{
  setPlayerList(input_player_list);
  setSize(input_size_x, input_size_y);
}

void Map::getPlayerList(std::vector<int>& output_player_list)
{
  output_player_list = player_list;
}

void Map::getSize(int& input_size_x, int& input_size_y)
{
  input_size_x = size_x;
  input_size_y = size_y;
}

void Map::setPlayerList(const std::vector<int>& input_player_list)
{
  player_list = input_player_list;
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
