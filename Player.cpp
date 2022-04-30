#include "Player.hpp"


namespace coup{
    Player::Player(Game &game, string name){
        this->game = &game;
        this->name = name;
        this->game->addPlayer(name);
    }

    void Player::income(){
        ++this->balance;
    }
    int Player::coins(){
        return this->balance;
    }

    void Player::foreign_aid(){
        this->balance += 2;
    }

    void Player::coup(Player p){
        for (unsigned int i = 0; i < this->game->Players.size(); i++){
            if (!p.name.compare(this->game->Players[i])){
                this->game->Players.erase(this->game->Players.begin() + i);
                return;
            }
        }
    }

    void Player::role(){
        std::cout << this->name;
    }
    



}