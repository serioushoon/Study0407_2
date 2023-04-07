#include <iostream>
#include "World.h"
#include "Floor.h"
#include "Wall.h"
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include <conio.h>
//#include <vector>

using namespace std;

int main()
{
	int Map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},
	};

	int PlayerX = 1;
	int PlayerY = 1;
	bool bIsRunning = true;

	while (bIsRunning) //GameLoop
	{
		//Frame
		//Input();
		char Key;
		Key = _getch();
		//Tick();
		if (Key == 'd')
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'q')
		{
			bIsRunning = false;
		}

		//Render();
		system("cls");

		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}


	return 0;
}