#include "Puzzle.h"
#include <iostream>

Puzzle::Puzzle(Player& ref) : answer(0)
{
	
}
void Puzzle::SolvePuzzle(Player& pRef)
{
	int pointsToAdd;
	std::cout << "How much is 2*2?" << std::endl;

	std::cin >> answer;

	if (answer == 2 * 2)
	{
		pointsToAdd = std::rand() % 15;
		pRef.AddToStatPointsAmount(pointsToAdd);
		std::cout << "Correct you have earned " << pointsToAdd << " points!" << std::endl;
		std::cout << "Total points: " << pRef.GetStatPoints() << std::endl;
		
		readyToTransition = true;
	}
	else {
		std::cout << "Incorrect, you have earned 0 points..." << std::endl;
		readyToTransition = true;
	}
}

