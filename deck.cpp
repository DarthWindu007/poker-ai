#include "card.h"
#include "deck.h"
#include <string>
#include <vector>
#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <ctime> 
#include <cstdlib> 

using namespace std;


Deck::Deck(){
	suits[0] = "club";
	suits[1] = "diamond";
	suits[2] = "spade";
	suits[3] = "heart";

	for (int i = 0; i < 4; ++i)
	{
		string suit = suits[i];
		for (int g = 0; g < 13; ++g)
		{
			Card card(g+1,suit);
			deck.push_back(card);
		}
	}
	shuffle();
}
int myrandom (int i) { return rand()%i;}
void Deck::shuffle(){
	srand ( unsigned ( time(0) ) );
/*	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	vector<Card> temp(52);
	int s = deck.size()
	for (int i = 0; i < s; ++i)
	{
		int r = rand()%(s);
		temp[i] = deck[]
	}*/
	random_shuffle(deck.begin(),deck.end(),myrandom);
}