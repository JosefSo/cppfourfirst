#include "Player.hpp"

namespace coup{

    class Assassin : public Player{
    private:

    public:
        Assassin(Game &game, string name):Player(game, name){ }
        //~Assassin();

        //void foreign_aid(); //dismiss another player
        //void coup(Player player);
        void role();
        void block(Player player);
    };
}