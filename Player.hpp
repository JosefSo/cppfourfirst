
#pragma once
#include <iostream>
#include "Game.hpp"
#include <string>

using std::string;
using std::ostream;
using std::istream;

namespace coup{
    class Game;
    class Player{

    private:
        string name;
        Game* game; //pointer to player's game
        int balance;
    public:
        Player(Game& game, string name);
        //~Player();

        void income();
        int coins();
        void foreign_aid();
        void coup(Player p);
        void role();


    };
}
