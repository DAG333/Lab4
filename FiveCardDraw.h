#ifndef FiveCardDraw_h
#define FiveCardDraw_h

#include "stdafx.h"
#include "game.h"
using namespace std;

class FiveCardDraw: public Game {

protected:
	size_t dealer;
	Deck trash;
	FiveCardDraw();

public:
	virtual int before_turn(Player & p); 


private:

};

#endif