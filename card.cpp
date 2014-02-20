#include "card.h"
#include <string>

using namespace std;

Card::Card(){
	n = 0;
	s = "";
}

Card::Card(int nn, string ss){
	n = nn;
	s = ss;
}