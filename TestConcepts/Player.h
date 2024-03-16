#pragma once
class Player
{
public:
	
	int* ptrStrenght = &strenght;
	int* ptrLuck = &luck;

	void AssignSkillPoints(int* statToBeAssigned, int AmountOfPoints);
	
	int AddToStatPointsAmount(int Amount) { return *ptrPlayerStatPoints += Amount; }
	int GetStatPoints() const { return *ptrPlayerStatPoints; }

	
protected:
	int* ptrPlayerStatPoints = &playerStatPoints;
	~Player();
private:
	int playerStatPoints = 0;
	int strenght=1;
	int luck=1;
};

