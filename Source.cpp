#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include <string>


#include "PLAYERDRAFT.h"

#include "PLAYER.h" //PLAYER HEADER
#include "TEAMS.h" // TEAMS HEADER

using namespace std;

string playernames[2955];
string collegenames[346];
int line1, line2;
ifstream nameofplayer;  ifstream nameofcollege;  ofstream out;


string PointGuard, ShootingGuard, SmallForward, PowerForward, Center;


int totalgamesplayed;


int main()
{
	srand(time(NULL));

	cout << "-------------------------------GAMEPLAY START-------------------------------" << endl;

	const int TEAMSELECT = 4;

	int schedulenumber[TEAMSELECT] = { 1, 2, 3, 4 };
	string teamname[TEAMSELECT] = { "Boston" , "Minnesota" , "Los Angeles" , "Philadelphia" };

	int scheduleseed = 1;



	/*std::ifstream datasheets("playerdata.txt");

	if (datasheets.good())
	{
		std::cout << "Welcome back. Your career will resume shortly..." << endl;
	}*/

		std::cout << "New Player Detected. Beginning DRAFT." << endl << endl;

		std::cout << "WELCOME TO THE NBA DRAFT." << endl << endl;

		std::cout << "WARNING: THIS PROGRAM IS DESIGNED TO MIMIC THE ACTUAL LEAGUE AS MUCH AS POSSIBLE." << endl;
		std::cout << "SCREWING UP THE DRAFT CAN LEAD TO THE DESTRUCTION OF A FRANCHISE'S FUTURE." << endl;
		std::cout << "WHEN DRAFTING, DO NOT SELECT ANY NUMBER APART FROM 1-5. YOU ARE A GENERAL MANAGER." << endl;
		std::cout << "SELECTING ANY NUMBER OUTSIE THIS RANGE WILL RESULT IN SELECTING A RANDOM POSITION." << endl;

		std::cout << "DRAFT START" << endl;

		std::cout << "YOU WILL NOW DRAFT YOUR PLAYERS. THEIR STATS WILL BE RANDOMIZED. YOU CAN DRAFT 5 PLAYERS OF ANY POSITION." << "\n" << "\n" << "\n" << endl;


		int draftround = 0;

		while (draftround < 1)
		{

			int i;
			std::cout << endl << "PICK " << draftround + 1;
			std::cout << "------------------------------------------------------------------------";
			std::cout << endl << "Choose which position you would like to draft." << endl << endl;
			std::cout << "1 ----- POINT GUARD" << endl;
			std::cout << "2 ----- SHOOTING GUARD" << endl;
			std::cout << "3 ----- SMALL FORWARD" << endl;
			std::cout << "4 ----- POWER FORWARD" << endl;
			std::cout << "5 ----- CENTER" << endl;
			std::cin >> i;

			switch (i)
			{

			case 1: //PG

				PointGuardDraft();

				break;

			case 2: //SG

				ShootingGuardDraft();

				break;

			case 3: // SF

				SmallForwardDraft();

				break;

			case 4: //PF

				PowerForwardDraft();

				break;

			case 5: // C

				CenterDraft();

				break;

			default:
			{
				std::cout << "Invalid position choice." << std::endl;
				int draftbust = ((rand() % 5) + 1);

				if (draftbust = 1)
				{
					PointGuardDraft();
				}

				else if (draftbust = 2)
				{
					ShootingGuardDraft();
				}

				else if (draftbust = 3)
				{
					SmallForwardDraft();
				}

				else if (draftbust = 4)
				{
					PowerForwardDraft();
				}

				else if (draftbust = 5)
				{
					CenterDraft();
				}

				break;

			}


			}

			draftround++;

		}



		std::cout << std::endl << "Drafting Complete." << endl;

	return 0;

	std::cout << "point guard's shooting is: " << inFile << shooting << endl;

}







/*std::cout << "New Player Detected. Beginning DRAFT." << endl << endl;

std::cout << "WELCOME TO THE NBA DRAFT." << endl << endl;

std::cout << "WARNING: THIS PROGRAM IS DESIGNED TO MIMIC THE ACTUAL LEAGUE AS MUCH AS POSSIBLE." << endl;
std::cout << "SCREWING UP THE DRAFT CAN LEAD TO THE DESTRUCTION OF A FRANCHISE'S FUTURE." << endl;
std::cout << "WHEN DRAFTING, DO NOT SELECT ANY NUMBER APART FROM 1-5. YOU ARE A GENERAL MANAGER." << endl;
std::cout << "SELECTING ANY NUMBER OUTSIE THIS RANGE WILL RESULT IN SELECTING A RANDOM POSITION." << endl;

std::cout << "DRAFT START" << endl;

std::cout << "YOU WILL NOW DRAFT YOUR PLAYERS. THEIR STATS WILL BE RANDOMIZED. YOU CAN DRAFT 5 PLAYERS OF ANY POSITION." << "\n" << "\n" << "\n" << endl;


int draftround = 0;

while (draftround < 5)
{

	int i;
	std::cout << "PICK " << draftround + 1;
	std::cout << "------------------------------------------------------------------------";
	std::cout << endl << "Choose which position you would like to draft." << endl << endl;
	std::cout << "1 ----- POINT GUARD" << endl;
	std::cout << "2 ----- SHOOTING GUARD" << endl;
	std::cout << "3 ----- SMALL FORWARD" << endl;
	std::cout << "4 ----- POWER FORWARD" << endl;
	std::cout << "5 ----- CENTER" << endl;
	std::cin >> i;

	switch (i)
	{

	case 1: //PG

		PointGuardDraft();

		break;

	case 2: //SG

		ShootingGuardDraft();


		break;

	case 3: // SF

		SmallForwardDraft();

		break;

	case 4: //PF

		PowerForwardDraft();

		break;

	case 5: // C

		CenterDraft();

		break;

	default:
	{
		std::cout << "Invalid position choice." << std::endl;
		int draftbust = ((rand() % 5) + 1);

		if (draftbust = 1)
		{
			PointGuardDraft();
		}

		else if (draftbust = 2)
		{
			ShootingGuardDraft();
		}

		else if (draftbust = 3)
		{
			SmallForwardDraft();
		}

		else if (draftbust = 4)
		{
			PowerForwardDraft();
		}

		else if (draftbust = 5)
		{
			CenterDraft();
		}

		break;

	}


	}

	draftround++;

}

std::cout << std::endl << "Drafting Complete." << endl;

return 0;
*/





