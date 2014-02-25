#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>
#include "sharedcards.h"
#include "pot.h"
#include "card.h"
#include "player.h"
using namespace std;

class Game
{
public:
	Pot pot;
	SharedCards shared;
	bool isStart;
	int bb;
	int sb;
	Game(Pot p, SharedCards s);
	Game();
	friend ostream &operator<<(ostream &out, Game g)     //output
	{
		out << g.pot << "\n";
		out << g.shared;
		return out;
	}
};

#endif