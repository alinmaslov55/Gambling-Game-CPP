#include "player.h"
#include <vector>
#include <string>

const float initial_money = 1000;
bool Player::isPlayerNameValid(const std::string& name) const{
    if(!(name.length() >= 2 && name.length() < 32)) {
        std::cout << "Name must be at least 2 characters long and not more than 32 characters" << std::endl;
        return false;
    }
    return true;
}
Player::Player(){
    playerName = "";
    playerID = 0;
    money = initial_money;
    rounds_played = 0;
    total_money_won = total_money_lost = 0;
}

Player::Player(const int& id, const std::string& name): playerID(id), playerName(name){
    money = initial_money;
    rounds_played = 0;
    total_money_won = total_money_lost = 0;
}



std::string Player::getPlayerName() const { return playerName; }
void Player::setPlayerName(std::string& name) { 
    playerName = name; 
    while(!isPlayerNameValid(playerName)){
        std::cout << "Player name is not valid" << std::endl;
        std::cout << "Enter a valid player name: ";
        std::cin >> playerName;
    }
}
int Player::getPlayerID() const { return playerID; }
void Player::setPlayerID(const int& id) { playerID = id; }
Player::~Player(){}

std::ostream& operator<<(std::ostream& os, const Player& player){
    os << "Player ID: " << player.playerID << std::endl;
    os << "Player Name: " << player.playerName << std::endl;
    os << "Money: $" << player.money << std::endl;
    os << "Rounds Played: " << player.rounds_played << std::endl;
    os << "Total Money Won: $" << player.total_money_won << std::endl;
    os << "Total Money Lost: $" << player.total_money_lost << std::endl;
    return os;
}