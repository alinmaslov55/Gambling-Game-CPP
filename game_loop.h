#include <iostream>
#include <vector>
#include "player.h"

#ifndef GAME_LOOP
#define GAME_LOOP

int return_number_of_players();
std::vector<Player> set_player(const int& number_of_players);
void game_loop(std::vector<Player>& players);

#endif
