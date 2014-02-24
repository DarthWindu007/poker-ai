#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "card.h"
#include <vector>
using namespace std;

class Player
{
public:
	int money; string name;
	vector<Card> hand;
	Player(int mm, string nn);
	Player();
	friend ostream &operator<<(ostream &out, Player p)     //output
	{
        out<< p.money << " " << p.name <<"\n"<< p.hand[0] << "\n" << p.hand[1] << "\n";
        return out;
	}
};

#endif