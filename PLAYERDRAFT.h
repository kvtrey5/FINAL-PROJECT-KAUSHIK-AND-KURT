#pragma once
#include <iostream>
#include <fstream>
using namespace std; 


int draftround;

int shooting; // slashing
int scoring; // finishing
int rebounding; //rebounding
int defense; // defense

int stamina = 50;

bool clutch;
bool volumeshooter;

// vs = volumeshooter determinant

int UpdatePlayerStamina(int stamina)
{
	return stamina;
}
void PointGuardDraft()
{
	stamina;

	shooting = ((rand() % 8) + 1);
	scoring = ((rand() % 7) + 1);
	rebounding = ((rand() % 4) + 1);
	defense = ((rand() % 5) + 1);
		
	ofstream outFile("PG.txt");
	if (outFile.is_open()) 
	{
		outFile << shooting << endl;
		outFile << scoring << endl;
		outFile << defense << endl;
		outFile << rebounding << endl;

		std::cout << "Shooting: " << shooting << endl;
		std::cout << "Scoring/Finishing: " << scoring << endl;
		std::cout << "Defense: " << defense << endl;
		std::cout << "Rebounding: " << rebounding << endl;

		int vs = ((rand() % 35) + 1);
		if (vs % 2 == 0) 
		{
			std::cout << "VOLUME SHOOTER ATTRIBUTE" << endl;
			bool volumeshooter = true;
			outFile << volumeshooter;

		}

		int clutchtime = ((rand() + 50) + 1);
		if (clutchtime % 5 == 0) 
		{
			std::cout << "CLUTCH SHOOTER";
			bool clutch = true;
			outFile << clutch;

		}

		outFile.close();
	}
	else {
		cout << "Unable to open file for writing." << endl;
	}



}
void ShootingGuardDraft()
{
	stamina;

	shooting = ((rand() % 10) + 1);
	scoring = ((rand() % 8) + 1);
	rebounding = ((rand() % 6) + 1);
	defense = ((rand() % 8) + 1);

	std::cout << "Shooting: " << shooting << "\n";
	std::cout << "Scoring/Finshing: " << scoring << "\n";
	std::cout << "Defense: " << defense << "\n";
	std::cout << "Rebounding: " << rebounding << endl << "\n";

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		volumeshooter = true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		clutch == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
	}
	
}
void SmallForwardDraft()
{
	stamina;

	shooting = ((rand() % 7) + 1);
	scoring = ((rand() % 8) + 1);
	rebounding = ((rand() % 9) + 1);
	defense = ((rand() % 10) + 1);

	std::cout << "\n" << "Shooting: " << shooting << "\n";
	std::cout << "Scoring/Finshing: " << scoring << "\n";
	std::cout << "Defense: " << defense << "\n";
	std::cout << "Rebounding: " << rebounding << endl << "\n";

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		volumeshooter = true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		clutch == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
	}

}
void PowerForwardDraft()
{
	stamina;

	shooting = ((rand() % 7) + 1);
	scoring = ((rand() % 8) + 1);
	rebounding = ((rand() % 8) + 1);
	defense = ((rand() % 10) + 1);

	std::cout << "Shooting: " << shooting << "\n";
	std::cout << "Scoring/Finshing: " << scoring << "\n";
	std::cout << "Defense: " << defense << "\n";
	std::cout << "Rebounding: " << rebounding << endl << "\n";

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		volumeshooter = true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		clutch == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
	}
}
void CenterDraft()
{
	stamina;

	shooting = ((rand() % 5) + 1);
	scoring = ((rand() % 9) + 1);
	rebounding = ((rand() % 10) + 1);
	defense = ((rand() % 9) + 1);

	std::cout << "Shooting: " << shooting << "\n";
	std::cout << "Scoring/Finshing: " << scoring << "\n";
	std::cout << "Defense: " << defense << "\n";
	std::cout << "Rebounding: " << rebounding << endl << "\n";

	int vs = ((rand() % 25) + 1);

	if (vs % 2 == 0)
	{
		volumeshooter = true;
		std::cout << endl << "VOLUME SHOOTER ATTRIBUTE" << endl;
	}

	int clutchtime = ((rand() + 50) + 1);

	if (clutchtime % 5 == 0)
	{
		clutch == true;
		std::cout << endl << "CLUTCH ATTRIBUTE" << endl;
	}
}




// INSTALL PASSING LATER