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
    rounds_won = 0;
    rounds_played = 0;
    currentBetNumber = NULL;
}

Player::Player(const int& id, const std::string& name): playerID(id), playerName(name){
    rounds_won = 0;
    rounds_played = 0;
    currentBetNumber = NULL;
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
    os << "Rounds Won: " << player.rounds_won << std::endl;
    os << "Rounds Played: " << player.rounds_played << std::endl;
    return os;
}
void Player::playersBet(std::vector<Player>& playersVector, const int number_of_objects){
    for(auto& player : playersVector){
        std::cout << "Player " << player.getPlayerID() << ": " << player.getPlayerName() << std::endl;
        std::cout << "Which Number do you think will win?" << std::endl;
        std::cout << "Choose from 1 to " << number_of_objects << std::endl;
        int betNumber;
        std::cin >> betNumber;

    }
}
void Player::setCurrentBetNumber(const int& number){
    currentBetNumber = number;
}
int Player::getCurrentBetNumber() const{
    return currentBetNumber;
}