#include <iostream>
#include <vector>

#ifndef PLAYER
#define PLAYER

extern const float initial_money;
class Player{
    private:
        int playerID;
        std::string playerName;
        int rounds_won;
        int rounds_played;
        int currentBetNumber;
        bool isPlayerNameValid(const std::string& name) const;
    public:
        Player();

        Player(const int& id, const std::string& name);
        std::string getPlayerName() const;
        void setPlayerName(std::string& name);
        int getPlayerID() const;
        void setPlayerID(const int& id);
        
        friend std::ostream& operator<<(std::ostream& os, const Player& player);

        static void playersBet(std::vector<Player>& playersVector, const int number_of_objects);

        void setCurrentBetNumber(const int& number);
        int getCurrentBetNumber() const;
        ~Player();
};

#endif 