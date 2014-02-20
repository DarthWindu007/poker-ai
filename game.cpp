#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"
#include "player.h"

using namespace std;


int main(int argc, char const *argv[])
{
	cout << "wat" << endl;
	Card c(1,"clubs");
	cout << c << endl;
	Deck d;
	cout << d << endl;
	Player p1(100,"Eswar");
	cout<<p1<<endl;

	return 0;
}