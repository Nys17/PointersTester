#pragma once
#include"Player.h"

class Puzzle
{
public:
	Puzzle(Player& ref);

	void SolvePuzzle(Player& pRef);
	bool readyToTransition = false;
protected:
	int answer;
};

