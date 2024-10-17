#include "player.h"
#include <vector>
#include <string>

const float initial_money = 1000;

class Player{
    private:
        int playerID;
        std::string playerName;
        float money;
        int rounds_played;
        float total_money_lost;
        float total_money_won;
        std::vector<float> history_of_rounds;

        bool verificareNume(std::vector<Player> &players){
            for(Player player : players){
                if(player.getPlayerName() == playerName){
                    return true;
                }
            }
            return false;
        }
    public:
        Player(){
            playerID = 0;
            playerName = "";
            money = initial_money;
            rounds_played = 0;
            total_money_won = total_money_lost = 0;
        }

        Player(const int& id, const std::string& name): playerID(id), playerName(name){
            money = initial_money;
            rounds_played = 0;
            total_money_won = total_money_lost = 0;
        }

        std::string getPlayerName() const { return playerName; }

        ~Player(){}
};