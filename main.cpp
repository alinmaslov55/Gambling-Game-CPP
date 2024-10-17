#include "game_loop.h"

int main(){
    int number_of_players = return_number_of_players();

    std::vector<Player> players = set_player(number_of_players);


    game_loop(players);


    //Show final Statistics
    return 0;
}