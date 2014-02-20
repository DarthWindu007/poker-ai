#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
using namespace std;

class Card
{
public:
	int n; string s;
	Card(int nn, string ss);
	Card();
	friend ostream &operator<<(ostream &out, Card c)     //output
	{
        out<< c.n << " " << c.s <<"\n";
        return out;
	}
};

#endif