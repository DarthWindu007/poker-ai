#ifndef SHAREDCARDS_H
#define SHAREDCARDS_H

#include <string>
#include <iostream>
#include "card.h"
#include <vector>
using namespace std;

class SharedCards
{
public:
	vector<Card> flop;
	vector<Card> turn;
	vector<Card> river;
	SharedCards();
	friend ostream &operator<<(ostream &out, SharedCards c)     //output
	{
		if(c.flop.size() > 0)
			out << c.flop[0] << ", " << c.flop[1] << ", " << c.flop[2];
		if(c.turn.size()>0)
			out << ", " << c.turn[0];
		if(c.river.size()>0)
			out << ", " << c.river[0];

		out <<"\n";
        return out;
	}
};

#endif