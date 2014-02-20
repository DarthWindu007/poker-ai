#ifndef DECK_H
#define DECK_H

#include <string>
#include "card.h"
#include <vector>
#include <iostream>
#include <ostream>
using namespace std;

class Deck
{
static const string suits[4];
public:
	vector<Card> deck;
	Deck();
	void shuffle();
	friend ostream &operator<<(ostream &out, Deck d)     //output
	{
		for (int i = 0; i < d.deck.size(); ++i)
		{
			out << d.deck[i]<<"\n";
		}
		return out;
	}
};

#endif