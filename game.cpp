#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"
#include "player.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int num_players;
vector<Player> players;
bool end_game = false;
Deck game_deck;

void init()
{
	cout << "How many players? ";
	cin >> num_players;
	if (num_players < 2)
	{
		cout << "Insufficient number of players" << endl;
		init();
		return;
	}
	for (int i = 0; i < num_players; ++i)
	{
		cout << i+1 << " Player name? ";
		string pname;
		cin >> pname;
		Player newp(1000, pname);
		players.push_back(newp);
	}
}

void shuffle()
{
	game_deck.shuffle();
}

void game()
{
	shuffle();
}

int main(int argc, char const *argv[])
{
/*	cout << "wat" << endl;
	Card c(1,"clubs");
	cout << c << endl;
	Deck d;
	cout << d << endl;
	Player p1(100,"Eswar");
	cout<<p1<<endl;*/
	//cout << "wat"<<endl;
	init();
	while(!end_game)
	{
		game();
		end_game = true;
	}
	cout << game_deck << endl;
	return 0;
}