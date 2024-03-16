#pragma once
#include "Player.h"
#include "Puzzle.h"
#include "InvestStatPointsScreen.h";

 enum GameState{ sPuzzle, sInvestScreen,sComplete,numState};

class LevelManager
{
public :
	bool Load();
	void Update();

	~LevelManager();
	int* ptExit = &exit;
private:
	GameState state;
	int exit = 0;
};

