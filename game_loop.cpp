#include <iostream>
#include <vector>
#include "game_loop.h"
#include "player.h"



int return_number_of_players(){
    int number_of_players;
    do{
        std::cout << "Enter the number of players: ";
        std::cin >> number_of_players;
    }while(!(number_of_players>0 && number_of_players <= 4));
    return number_of_players;
}
std::vector<Player> set_player(const int& number_of_players){
    std::vector<Player> vectorPlayers(number_of_players);

    for(auto& player: vectorPlayers){
        std::cout << player << std::endl;
    }

    return vectorPlayers;
}
void game_loop(){


}
