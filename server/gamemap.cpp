#include "gamemap.h"
using namespace std;

GameMap::GameMap(int id, int input_size_x, int input_size_y)
{
  setSize(input_size_x, input_size_y);
  generateGameMap();
}

void GameMap::getStarSystemList(std::map<int,StarSystem>& output_starsystem_list)
{
  output_starsystem_list = starsystem_list;
}

void GameMap::getSize(int& input_size_x, int& input_size_y)
{
  input_size_x = size_x;
  input_size_y = size_y;
}

void GameMap::setStarSystemList(const std::map<int,StarSystem>& input_starsystem_list)
{
  starsystem_list = input_starsystem_list;
}

void GameMap::setSize(int input_size_x, int input_size_y)
{
  size_x = input_size_x;
  size_y = input_size_y;
}

void GameMap::addStarSystem(StarSystem& input_starsystem)
{
  starsystem_list.insert(std::pair<int,StarSystem>(input_starsystem.getID(),input_starsystem));
}

void GameMap::generateGameMap()
{
  //TODO: create algorithm for GameMap generation
  
}


