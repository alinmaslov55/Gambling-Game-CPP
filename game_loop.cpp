#include <iostream>
#include <vector>
#include "game_loop.h"
#include "print_to_screen.h"
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
void game_loop(std::vector<Player> &vectorPlayers){
    //while loop cu meniul jocului
    int option;
    do{
        option = show_menu();
        switch(option){
            case 1:
                //Joaca o runda
                break;
            case 2:
                //Arata statistica jucatorilor
                break;
            case 0:
                //Iesire din joc
                break;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }

    }while(option != 0);


}
