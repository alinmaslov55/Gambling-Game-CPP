#include <iostream>
#include <vector>
#ifndef PLAYER
#define PLAYER

extern const float initial_money;
class Player{
    private:
        int playerID;
        std::string playerName;
        float money;
        int rounds_played;
        float total_money_lost;
        float total_money_won;
        std::vector<float> history_of_rounds;

        bool isPlayerNameValid(const std::string& name) const;
    public:
        Player();

        Player(const int& id, const std::string& name);
        std::string getPlayerName() const;
        void setPlayerName(std::string& name);
        int getPlayerID() const;
        void setPlayerID(const int& id);
        
        friend std::ostream& operator<<(std::ostream& os, const Player& player);

        ~Player();
};

#endif 