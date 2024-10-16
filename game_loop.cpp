#include <iostream>
#include "game_loop.h"
#include "player.h"


std::vector<Player> set_player(){
    int num_players;
    std::cout << "\nCati jucatori sunt prezenti(1 - 4): ";
    std::cin >> num_players;
    std::cout << '\n';


    // Initialize players
    std::vector<Player> vector_players(num_players);
    
    std::cout << "Inregistrare Jucatori: "<< std::endl;

<<<<<<< Tabnine <<<<<<<
    for(int i = 0; i < num_players; ++i){//-
        //error says incomplete type is not allowed//-
        Player* new_player = new Player();//-
//-
        delete new_player;//-
    }//-
    Player* new_player = new Player();//+
    // ... other operations with new_player ...//+
    delete new_player;//+
>>>>>>> Tabnine >>>>>>>// {"conversationId":"ad8b979c-c98c-405f-9604-08c62dfb1682","source":"instruct"}


}
void game_loop(){


}
