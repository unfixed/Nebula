#pragma once
#include <stdlib.h>
#include <map>
#include "gameobject.h"
#include "starsystem.h"

class GameMap : public GameObject

{
public:
  GameMap(int id, int size_x, int size_y);

  void getStarSystemList(std::map<int,StarSystem>& output_starsystem_list);
  void getSize(int& input_size_x, int& input_size_y);

  void setStarSystemList(const std::map<int,StarSystem>& input_starsystem_list);
  void setSize(int input_size_x, int input_size_y);

private:
  void generateGameMap();
  void addStarSystem(StarSystem& input_starsystem);

  int size_x;
  int size_y;
  std::map<int,StarSystem> starsystem_list;

};
