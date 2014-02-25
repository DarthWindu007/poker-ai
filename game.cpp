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
	isStart=true;
	bb = 2;
	sb = 1;
}

Game::Game(Pot p, SharedCards s)
{
	pot=p;
	shared=s;
	isStart=true;
	bb = 2;
	sb = 1;
}