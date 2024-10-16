#include "player.h"
#include <vector>

const float initial_money = 1000;

class Player{
    private:
        float money;
        int rounds_played;
        float total_money_lost;
        float total_money_won;
        std::vector<float> history_of_rounds;

    public:
        Player(){
            money = initial_money;
            rounds_played = 0;
            total_money_won = total_money_lost = 0;
        }
};