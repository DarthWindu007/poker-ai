#ifndef POT_H
#define POT_H

#include <string>
#include <iostream>
using namespace std;

class Pot
{
public:
	int money;

	Pot(int nn);
	Pot();
	friend ostream &operator<<(ostream &out, Pot c)     //output
	{
		out <<"Money: " << c.money<<"\n";
        return out;
	}
};

#endif