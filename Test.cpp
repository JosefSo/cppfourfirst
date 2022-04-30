#include <iostream>
#include "doctest.h"
#include <string>
#include <stdexcept>
#include "Game.hpp"
#include "Player.hpp"
#include "Duke.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"


using namespace coup;

TEST_CASE("Game")
{
    // Game
    Game game{};

    // Players
	Duke duke{game, "Duke_"};
	Assassin assassin{game, "Assassin_"};
	Ambassador ambassador{game, "Ambassador_"};
	Captain captain{game, "Captain_"};
	Contessa contessa{game, "Contessa_"};

    // Duke_ #1
	CHECK(game.turn() == "Duke_");
	CHECK(duke.coins() == 0);
	CHECK_NOTHROW(duke.income());
	CHECK(duke.coins() == 1);

    // Assassin_ #1
	CHECK(game.turn() == "Assassin_");
	CHECK(assassin.coins() == 0);
	CHECK_NOTHROW(assassin.income());
	CHECK(assassin.coins() == 1);

    // Ambassador_ #1
	CHECK(game.turn() == "Ambassador_");
	CHECK(ambassador.coins() == 0);
	CHECK_NOTHROW(ambassador.income());
	CHECK(ambassador.coins() == 1);

    // Captain_ #1
	CHECK(game.turn() == "Captain_");
	CHECK(captain.coins() == 0);
	CHECK_NOTHROW(captain.income());
	CHECK(captain.coins() == 1);

    // Contessa_ #1
	CHECK(game.turn() == "Contessa_");
	CHECK(contessa.coins() == 0);
	CHECK_NOTHROW(contessa.income());
	CHECK(contessa.coins() == 1);

    // Duke_ #2
	CHECK(game.turn() == "Duke_");
	CHECK(duke.coins() == 1);
	CHECK_NOTHROW(duke.foreign_aid());
	CHECK(duke.coins() == 3);

    // Assassin_ #2
	CHECK(game.turn() == "Assassin_");
	CHECK(assassin.coins() == 1);
	CHECK_NOTHROW(assassin.foreign_aid());
	CHECK(assassin.coins() == 3);

    // Ambassador_ #2
	CHECK(game.turn() == "Ambassador_");
	CHECK(ambassador.coins() == 1);
	CHECK_NOTHROW(ambassador.foreign_aid());
	CHECK(ambassador.coins() == 3);

    // Captain_ #2
    CHECK(game.turn() == "Captain_");
	CHECK(captain.coins() == 1);
	CHECK_NOTHROW(captain.income());
	CHECK(captain.coins() == 2);

    // Contessa_ #2
	CHECK(game.turn() == "Contessa_");
	CHECK(contessa.coins() == 1);
	CHECK_NOTHROW(contessa.income());
	CHECK(contessa.coins() == 2);
}