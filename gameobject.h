#pragma once
#include <string>

class GameObject

{
public:
  virtual std::string getName();
  virtual int getID();

  virtual void setName(std::string input_name);
  virtual void setID(int input_id);

private:
  std::string name;
  int id;

};
