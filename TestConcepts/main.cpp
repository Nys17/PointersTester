// TestConcepts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LevelManager.h"

LevelManager* lmRef = new LevelManager;
int main()
{
	int s = 0;
	int choice = -1;
	
	if (lmRef->Load()==true)
	{
		lmRef->Load();
		while (lmRef->Load() == true)
		{
			while
				(*lmRef->ptExit == 0)
			{
				lmRef->Update();
			}
			
			
				std::cout << "Demo completed - press 1 to continue ; 2 to exit" << std::endl;

				std::cin >> choice;

				if (choice == 1)
				{
					*lmRef->ptExit = 0;
					
				}
				else if (choice == 2) {
					std::cout << "Press escape to exit" << std::endl;
				}
			
		}

		
	}
	
}

