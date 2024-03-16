#include "InvestStatPointsScreen.h"
#include <iostream>

InvestStatPointsScreen::InvestStatPointsScreen(Player& ref)
{
}

void InvestStatPointsScreen::InvestThePoints(Player& pRef)
{
	int choice = -1;
	int InputChoice;
	int points = -1;
	int InputPoints;

	while (choice != 1 && choice != 2)
	{
		std::cout << "Time to upgrade skills..." << std::endl << "Press 1 to upgrade strenght , Press 2 for luck" << std::endl;

		std::cin >> choice;


	}
	

	while (points < 0) {
		std::cout << "Now input how many points you want to put in" << std::endl;

		std::cin >> InputPoints;

		if (InputPoints >0 && InputPoints <= pRef.GetStatPoints())
		{
			points = InputPoints;
		}

	}
	if (choice == 1)
	{
		pRef.AssignSkillPoints(pRef.ptrStrenght, points);
	}
	else {
		pRef.AssignSkillPoints(pRef.ptrLuck, points);
	}
	if (pRef.GetStatPoints() == 0)
	{
		nextStage = true;
	}
	
	
}
