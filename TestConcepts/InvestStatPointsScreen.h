#pragma once
#include "Player.h"

class InvestStatPointsScreen
{
public:
	InvestStatPointsScreen(Player& ref);

	void InvestThePoints(Player& pRef);

	bool nextStage = false;
};

