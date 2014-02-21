#include "player.h"
#include <string>
#include "card.h"

Player::Player(int mm, string nn){
	money = mm;
	name = nn;
	hand.push_back(Card());
	hand.push_back(Card());
}

Player::Player(){
	money = 0;
	name = "Player 1";
	hand.push_back(Card());
	hand.push_back(Card());
}
