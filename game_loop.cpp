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

    for(auto i = 0; i < number_of_players; i++){
        std::string buffer_for_name = "";
        std::cout << "Enter name for player " << i+1 << ": ";
        std::cin >> buffer_for_name;
        vectorPlayers[i].setPlayerID(i+1);
        vectorPlayers[i].setPlayerName(buffer_for_name);
        std::cout << "Player " << i+1 << " has been created with name: " << vectorPlayers[i].getPlayerName() << std::endl;
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
                print_every_player_status(vectorPlayers);
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
