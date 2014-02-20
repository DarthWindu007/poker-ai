#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;

class Player
{
public:
	int money; string name;
	Player(int mm, string nn);
	Player();
	friend ostream &operator<<(ostream &out, Player p)     //output
	{
        out<< p.money << " " << p.name <<"\n";
        return out;
	}
};

#endif