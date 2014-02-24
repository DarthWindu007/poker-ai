#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"
#include "player.h"
#include "sharedcards.h"
#include "pot.h"
#include "game.h"
#include <ctime>
#include <cstdlib>

using namespace std;

Game::Game()
{
	pot = Pot();
	shared = SharedCards();
}

Game::Game(Pot p, SharedCards s)
{
	pot=p;
	shared=s;
}