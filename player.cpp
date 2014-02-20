#include "player.h"
#include <string>

Player::Player(int mm, string nn){
	money = mm;
	name = nn;
}

Player::Player(){
	money = 0;
	name = "Player 1";
}