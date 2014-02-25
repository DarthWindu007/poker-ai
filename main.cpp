#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"
#include "player.h"
#include "sharedcards.h"
#include "pot.h"
#include "game.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int num_players=0;
vector<Player> players;
bool end_game = false;
Deck game_deck;
Game tgame;
int plb=0;

void init()
{
	while(num_players < 2 || cin.fail() || num_players > 8)
	{
		cout << "How many players? ";
		cin >> num_players;
		if (num_players < 2 || cin.fail() || num_players > 8)
		{
			cout << "Insufficient number of players or non-numeric value" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
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

void get_blinds()
{
	if(tgame.isStart)
	{
		plb = rand()%players.size();
		tgame.isStart = false;
	}
	else
		plb++;
	cout << plb << endl;

	cout << players[plb].name << ", you are the dealer" << endl;
	cout << players[(plb+1)%players.size()].name << ", you are the small blind" << endl;
	cout << players[(plb+2)%players.size()].name << ", you are the big blind" << endl;
	players[plb+1].money -= tgame.sb;
	tgame.pot.money += tgame.sb;
	players[plb+2].money -= tgame.bb;
	tgame.pot.money += tgame.bb;
	cout << tgame.pot.money << " pot moneu" << endl;
}

void deal_to_players()
{
	for (int i = 0; i < players.size(); ++i)
	{
		players[i].hand[0] = game_deck.getCard();
		players[i].hand[1] = game_deck.getCard();
	}
}

void deal_shared()
{
	if(tgame.shared.flop.size() < 1)
	{
		tgame.shared.flop.push_back(game_deck.getCard());
		tgame.shared.flop.push_back(game_deck.getCard());
		tgame.shared.flop.push_back(game_deck.getCard());
	}
	else if(tgame.shared.turn.size() < 1)
	{
		tgame.shared.turn.push_back(game_deck.getCard());
	}
	else if(tgame.shared.river.size() < 1)
	{
		tgame.shared.river.push_back(game_deck.getCard());
	}
}

void bettings()
{
	
}

void game()
{
	tgame = Game();
	shuffle();
	get_blinds();
	deal_to_players();
	deal_shared();
	bettings();
	cout << tgame.shared << endl;
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
	//cout << game_deck << endl;
	for(int i = 0; i < players.size(); i++)
	{
		cout << players[i] << endl;
	}
	return 0;
}