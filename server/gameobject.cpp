#include "gameobject.h"
using namespace std;

std::string GameObject::getName()
{
  return name;
}
int GameObject::getID()
{
  return id;
}
void GameObject::setName(string input_name)
{
  name = input_name;
}
void GameObject::setID(int input_id)
{
  id = input_id;
}
