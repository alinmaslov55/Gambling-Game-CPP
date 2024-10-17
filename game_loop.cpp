#include <iostream>
#include <vector>
#include "game_loop.h"
#include "player.h"


std::vector<Player> set_player(const int& number_of_players){
    std::vector<Player> vectorPlayers(number_of_players);

    for(auto& player: vectorPlayers){
        std::cout << player << std::endl;
    }

    return vectorPlayers;
}
void game_loop(){


}
