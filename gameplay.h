#pragma once
#include <iostream>
#include "PLAYERDRAFT.h"
#include "Player.h"

using namespace std;


int teamscore;
int opponentscore;
int i;
string playername;

int main()
{
	teamscore = 0;
	cout << "Enter Player Name";
	cin >> playername;

	
	Player();
	Defender();

	void offensivetwo();
	{
		int twodecider = ((rand() % 30) + 1);

		if (twodecider = < scoring)
		{
			cout << playername << " hit a layup!" << endl;
			++teamscore;
		}

	}
	void offensivethree();
	{
		int threedecider = ((rand() % 50) + 1);

		if (threedecider = < scoring)
		{
			cout << playername << " hit a three!" << endl;
			++teamscore;
		}

	}
	else
	{
		void offensiverebound();
		{
			int rebound = ((rand() % 10) + 1);

			if (rebound = < scoring)
			{
				cout << playername << " your player got a rebound, time for a seconod chance!" << endl;
				++teamscore;
			}

		}
	}



}
