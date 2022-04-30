#include "Game.hpp"

namespace coup{

    // constructor
    Game::Game() {}

    vector<string> Game::players(){
        return this->Players;
    }


    void Game::addPlayer(string name){
        this->Players.push_back(name);
    }

    string Game::turn(){
        return "turn!";
    }
    
}