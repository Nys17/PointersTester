#include "LevelManager.h"

#include "Player.h"
#include "InvestStatPointsScreen.h"
#include "Puzzle.h"

 Player* playerRef = nullptr;
Puzzle* puzzleRef = nullptr;
InvestStatPointsScreen* investRef = nullptr;


bool LevelManager::Load()
{
	playerRef = new Player;
	puzzleRef = new Puzzle(*playerRef);
	investRef = new InvestStatPointsScreen(*playerRef);

	state = GameState::sPuzzle;
	
	return true;
}

void LevelManager::Update()
{
	switch (state)
	{
	case sPuzzle:
		puzzleRef->SolvePuzzle(*playerRef);// start

		if (puzzleRef->readyToTransition == true)
		{
			state = GameState::sInvestScreen;
		}
		break;
	case sInvestScreen:
		investRef->InvestThePoints(*playerRef);
		if (investRef->nextStage == true)
		{
			state = GameState::sComplete;
		}
		break;
	
	case sComplete:
		*ptExit = 1;
		break;
	}
	
}

LevelManager::~LevelManager()
{
	
	playerRef = nullptr;
	
	puzzleRef = nullptr;
	investRef = nullptr;
}
