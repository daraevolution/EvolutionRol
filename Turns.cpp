#include <cstdio>
#include <cstddef>
#include "Turns.h"
#include <iostream>

//Someone has Turn
bool Turns::HaveTurn(std::string player)
{
	bool HaveTurn = true;
	if(player.compare("") == 0)
	{
		HaveTurn = false;
	}
	return HaveTurn;
}