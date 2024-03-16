#include "Player.h"
#include <iostream>

void Player::AssignSkillPoints(int* statToBeAssigned, int AmountOfPoints)
{
	

	*statToBeAssigned += AmountOfPoints;// add points to stat
	if (*ptrPlayerStatPoints >0)
	{
		*ptrPlayerStatPoints -= AmountOfPoints; // substract added points from total stat points
	}
	if (*ptrStrenght <0)
	{
		*ptrPlayerStatPoints = 0;
	}
	

	
	

	if (GetStatPoints() >0)
	{
		std::cout << "Stat points left: " << GetStatPoints() << std::endl;
	}
	else if(*ptrPlayerStatPoints == 0) {
		std::cout << "Stat points left: " << GetStatPoints() << std::endl;
		std::cout << "Luck: " << *ptrLuck << " points" << std::endl << "Strenght: " << *ptrStrenght << " points" << std::endl;
		
	}

}


Player::~Player()
{
	delete ptrPlayerStatPoints;
	ptrPlayerStatPoints = nullptr;
	
	delete ptrLuck;
	ptrLuck = nullptr;

	delete ptrStrenght;
	ptrStrenght = nullptr;
}
