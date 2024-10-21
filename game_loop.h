#include <iostream>
#include <vector>
#include "player.h"
#include "object.h"

#ifndef GAME_LOOP
#define GAME_LOOP

extern const int number_of_objects;

int return_number_of_players();
std::vector<Player> set_player(const int& number_of_players);
void game_loop(std::vector<Player>& players);
void play_a_round(std::vector<Player>& vectorPlayers);
bool nowinners(std::vector<Object>& vectorObjects);

#endif
