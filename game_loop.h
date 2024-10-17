#include <iostream>
#include <vector>

#ifndef GAME_LOOP
#define GAME_LOOP
#include "player.h"

int return_number_of_players();
std::vector<Player> set_player(const int& number_of_players);
void game_loop();

#endif
