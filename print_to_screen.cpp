#include "print_to_screen.h"
#include <vector>
const std::string line = "----------------------------------------------------------------";
int show_menu(){
    int option = -1;
    while(!(option >= 0 && option <= 3)){
        std::cout << line << std::endl;
        std::cout << "1. Play a Round" << std::endl;
        std::cout << "2. Show statistics" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choose option: " << std::endl;
        std::cin >> option;
        std::cout << line << std::endl;
    }
    return option;
}
void print_every_player_status(std::vector<Player> &vectorPlayers){
    for(auto player : vectorPlayers){
        std::cout << line << std::endl;
        std::cout << player << std::endl;
        std::cout << line << std::endl;
    }
}