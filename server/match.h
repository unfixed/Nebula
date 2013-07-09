class Match : public GameObject
{
public:
Match(int id, std::map<int,Player>& input_player_list); 

private:
GameMap match_map;
std::map<int,Player> player_list;


}
