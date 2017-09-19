#include <iostream>
#include "Zombie.h"
#include <time.h>

int main()
{
	srand(time(NULL));
	Zombie zombies[10];
	for (int i = 0; i < 10; i++)
	{
		zombies[i] = Zombie();
	}
	bool winner;
	
	do
	{
		int remainingZombies = 0;

		int opponentOne = rand() % 10;
		int opponentTwo = rand() % 10;
		
		int opponentOneAttack = zombies[opponentOne].mAttackPower;
		int opponentTwoAttack = zombies[opponentTwo].mAttackPower;
		
		zombies[opponentOne].mHealth - opponentTwoAttack;
		

		for (int i = 0; i < 10; i++)
		{
			if (zombies[i].mHealth > 0)
			{
				remainingZombies++;
			}
		}
		winner = (remainingZombies > 1) ? false : true;
	} while (winner == false);
	system("pause");
}