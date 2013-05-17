#pragma once
#include "gameobject.h"
#include <vector>

class Map : public GameObject

{
public:
  Map(int id, const std::vector<int>& input_player_list, int size_x, int size_y);

  void getPlayerList(std::vector<int>& output_player_list);
  void getSize(int& input_size_x, int& input_size_y);

  void setPlayerList(const std::vector<int>& input_player_list);
  void setSize(int input_size_x, int input_size_y);

private:
  void generate_map();

  int size_x;
  int size_y;
  std::vector<int> player_list;

};
