#include <iostream>
#include <vector>
#include "player.h"
#ifndef PRINT_TO_SCREEN
#define PRINT_TO_SCREEN

extern const std::string line;
int show_menu();
void print_every_player_status(std::vector<Player> &vectorPlayers);

#endif