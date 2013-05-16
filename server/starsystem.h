class StarSystem : public MapItem

{
public:
  StarSystem(int input_id, std::string input_name, int input_resources, int input_location_x, int input_location_y, int input_owner_id);
  int getResources();
  //fleet getFleets();

  void setResources(int input_resources);
  void addFleet(Fleet& input_fleet);
  void removeFleet(int input_id_fleet);

private:
  int resources;
  //stack of all fleets within starsystem
  //std::stack<Fleet> fleets;

  // calculates the total number of ships within the starsystem
  //void calcShipTotal();

};
