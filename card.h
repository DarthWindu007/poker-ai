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
		string name = "";
		if (c.n==1 || c.n > 10)
		{
			if(c.n==1)
				out<< "A" << " " << c.s;
			else if(c.n == 11)
				out<< "J" << " " << c.s;
			else if(c.n == 12)
				out<< "Q" << " " << c.s;
			else if(c.n == 13)
				out<< "K" << " " << c.s;
		}
		else
		{
        	out<< c.n << " " << c.s;
        }
        return out;
	}
};

#endif