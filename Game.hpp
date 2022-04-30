#pragma once
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

namespace coup{
    class Player;

    class Game{
        public:
            vector<string> Players;

            string turn();
            vector<string> players();
            string winner();

            Game();
            Game(string player);
            //~Game();
            void addPlayer(string name);


    };
}