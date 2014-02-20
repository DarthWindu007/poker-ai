#include "card.h"
#include "deck.h"
#include <string>
#include <vector>
#include <iostream>     // std::cout
#include <algorithm>    // std::random_shuffle
#include <ctime> 
#include <cstdlib> 

using namespace std;

const string Deck::suits[4] = {"club", "diamond", "spade", "heart"};
Deck::Deck(){
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

void Deck::shuffle(){
	random_shuffle(deck.begin(),deck.end());
}