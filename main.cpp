#include "game_loop.h"
#include "print_to_screen.h"
#include "player.h"
#include <iostream>
#include <vector>

int return_number_of_players();
std::vector<Player> set_player(const int& number_of_players);
int main(){
    int number_of_players = return_number_of_players();

    std::vector<Player> vectorPlayers = set_player(number_of_players);


    game_loop(vectorPlayers);

    print_every_player_status(vectorPlayers);
    return 0;
}