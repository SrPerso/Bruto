//- -------- system -----------------
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned short uShort;

using namespace std;


uShort getNumWeapons(uShort Weapon) {

	uShort co = 0;
	
		for (uShort i = 0; i < 16; i++){

		if ((Weapon >> i) & 0x0001)		
			co++;		

		}

	return co;
}

void setWeapon(char* NameWeapon, uShort& Weapon) {

	if (strcmp(NameWeapon, "StoneHammer") == 0)//StoneHammer  -------------------------
	{

		if ((Weapon & 0x0001) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0001;

	}//if


	if (strcmp(NameWeapon, "Baton") == 0)//Baton  -------------------------
	{

		if ((Weapon & 0x0002) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0002;

	}//if

	if (strcmp(NameWeapon, "Broadsword") == 0)//Broadsword  -------------------------
	{

		if ((Weapon & 0x0004) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0004;

	}//if

	if (strcmp(NameWeapon, "Bumps") == 0)//Bumps  -------------------------
	{

		if ((Weapon & 0x0008) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0008;

	}//if

	if (strcmp(NameWeapon, "Keyboard") == 0)//Keyboard  -------------------------
	{

		if ((Weapon & 0x0010) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0010;

	}//if
	
	else if (strcmp(NameWeapon, "Knife") == 0)//knife -----------------------
	{

		if ((Weapon & 0x0020) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0020;

	}//if

	else if (strcmp(NameWeapon, "MorningStar") == 0)//MorningStar -----------------------
	{

		if ((Weapon & 0x0040) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0040;

	}//if

	else if (strcmp(NameWeapon, "Lance") == 0)//Lance -----------------------
	{

		if ((Weapon & 0x0080) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0080;

	}//if

	else if (strcmp(NameWeapon, "MammothBone") == 0)//MammothBone -----------------------
	{

		if ((Weapon & 0x0100) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0100;

	}//if
	
	else if (strcmp(NameWeapon, "Shuriken") == 0)//Shuriken -----------------------
	{

		if ((Weapon & 0x0200) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0200;

	}//if

	else if (strcmp(NameWeapon, "NoodleBowl") == 0)//NoodleBowl -----------------------
	{

		if ((Weapon & 0x0400) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0400;

	}//if

	else if (strcmp(NameWeapon, "PiouPiouz") == 0)//PiouPiouz -----------------------
	{

		if ((Weapon & 0x0800) >> 5)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x0800;

	}//if

	if (strcmp(NameWeapon, "Sword") == 0)//sword  -------------------------
	{

		if ((Weapon & 0x1000) >> 8)
			cout << "You have " << NameWeapon << " already.\n";
		
		else		
			Weapon = Weapon | 0x1000;
		
	}

	if (strcmp(NameWeapon, "TennisRacket") == 0)//TennisRacket  -------------------------
	{

		if ((Weapon & 0x2000) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x2000;

	}

	if (strcmp(NameWeapon, "Trident") == 0)//Trident  -------------------------
	{

		if ((Weapon & 0x4000) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x4000;

	}

	if (strcmp(NameWeapon, "Trombone") == 0)//Trombone  -------------------------
	{

		if ((Weapon & 0x8000) >> 8)
			cout << "You have " << NameWeapon << " already.\n";

		else
			Weapon = Weapon | 0x8000;

	}

	else//error  --------------------------------------------------
		cout << "There is a error, this weapon doesn't exists\n";

}

const void hasWeapon(char*NameWeapon,const uShort & NumWeapons) {



	if (strcmp(NameWeapon, "StoneHammer") == 0)//StoneHammer  -------------------------
	{

		if ((NumWeapons & 0x0001) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if


	if (strcmp(NameWeapon, "Baton") == 0)//Baton  -------------------------
	{

		if ((NumWeapons & 0x0002) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	if (strcmp(NameWeapon, "Broadsword") == 0)//Broadsword  -------------------------
	{

		if ((NumWeapons & 0x0004) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	if (strcmp(NameWeapon, "Bumps") == 0)//Bumps  -------------------------
	{

		if ((NumWeapons & 0x0008) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	if (strcmp(NameWeapon, "Keyboard") == 0)//Keyboard  -------------------------
	{

		if ((NumWeapons & 0x0010) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "Knife") == 0)//knife -----------------------
	{

		if ((NumWeapons & 0x0020) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "MorningStar") == 0)//MorningStar -----------------------
	{

		if ((NumWeapons & 0x0040) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "Lance") == 0)//Lance -----------------------
	{

		if ((NumWeapons & 0x0080) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "MammothBone") == 0)//MammothBone -----------------------
	{

		if ((NumWeapons & 0x0100) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "Shuriken") == 0)//Shuriken -----------------------
	{

		if ((NumWeapons & 0x0200) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "NoodleBowl") == 0)//NoodleBowl -----------------------
	{

		if ((NumWeapons & 0x0400) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	else if (strcmp(NameWeapon, "PiouPiouz") == 0)//PiouPiouz -----------------------
	{

		if ((NumWeapons & 0x0800) >> 5)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}//if

	if (strcmp(NameWeapon, "Sword") == 0)//sword  -------------------------
	{

		if ((NumWeapons & 0x1000) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}

	if (strcmp(NameWeapon, "TennisRacket") == 0)//TennisRacket  -------------------------
	{

		if ((NumWeapons & 0x2000) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}

	if (strcmp(NameWeapon, "Trident") == 0)//Trident  -------------------------
	{

		if ((NumWeapons & 0x4000) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}

	if (strcmp(NameWeapon, "Trombone") == 0)//Trombone  -------------------------
	{

		if ((NumWeapons & 0x8000) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}

	else//error
		cout << "There is a error, this weapon doesn't exists\n";

}

void printAvailableWeapons(uShort& Weapon) {
	
	if (getNumWeapons != 0)
	{
		cout << "Your weapons:\n";
		for (int i = 0; i < 16; i++)
		{

			if (Weapon & 0x0001)
			{
				if (i == 0)
					cout << "- Stone Hammer.\n";
			
				if (i == 1)
					cout << "- Baton.\n";
				
				if (i == 2)
					cout << "- BroadSword.\n";
				
				if (i == 3)
					cout << "- Bumps.\n";
				
				if (i == 4)
					cout << "- Keyboard.\n";
				
				if (i == 5)
					cout << "- Knife.\n";
				
				if (i == 6)
					cout << "- Morning Star.\n";
			
				if (i == 7)
					cout << "- Lance.\n";
				
				if (i == 8)
					cout << "- Mammoth's Bone.\n";
			
				if (i == 9)			
					cout << "- Shuriken.\n";
				
				if (i == 10)
					cout << "- Noodle Bowl.\n";
				
			    if (i == 11)
					cout << "- Piou-Piouz.\n";
			
				if (i == 12)
					cout << "- Sword.\n";
				
				if (i == 13)
					cout << "- Tennis Racket.\n";
				
				if (i == 14)
					cout << "- Trident.\n";
				
				if (i == 15)
					cout << "- Trombone.\n";
				
			}
			Weapon = Weapon >> 1;
		}
	}
	else
		cout << "You have no weapons.\n";
	

}

//animals -------------------------------------------------------------------------------------

unsigned short getNumAnimals(uShort Animal) {

	uShort co = 0;

	for (uShort i = 0; i < 16; i++) {

		if ((Animal >> i) & 0x0001)
			co++;

	}

	return co;

}

void setAnimal(char* NameAnimal, uShort & Animal) {


	if (strcmp(NameAnimal, "Dog") == 0)//Dog  -------------------------
	{

		if ((Animal & 0x0001) >> 8)
			cout << "You have " << NameAnimal << " already.\n";

		else
			Animal = Animal | 0x0001;

	}//if

	if (strcmp(NameAnimal, "Wolf") == 0)//Wolf  -------------------------
	{

		if ((Animal & 0x0002) >> 8)
			cout << "You have " << NameAnimal << " already.\n";

		else
			Animal = Animal | 0x0002;

	}//if

	if (strcmp(NameAnimal, "Bear") == 0)//Bear  -------------------------
	{

		if ((Animal & 0x0004) >> 8)
			cout << "You have " << NameAnimal << " already.\n";

		else
			Animal = Animal | 0x0004;

	}//if


	else//error  --------------------------------------------------
		cout << "There is a error, this Animal doesn't exists\n";


}

void hasAnimal(char*NameAnimal,const uShort & Animal) {

	if (strcmp(NameAnimal, "Dog") == 0)//Dog  -------------------------
	{

		if ((Animal & 0x0001) >> 8)
			cout << "You have " << NameAnimal;

		else
			cout << "You haven't the " << NameAnimal;

	}//if

	if (strcmp(NameAnimal, "Wolf") == 0)//Wolf  -------------------------
	{

		if ((Animal & 0x0002) >> 8)
			cout << "You have " << NameAnimal;

		else
			cout << "You haven't the " << NameAnimal;

	}//if

	if (strcmp(NameAnimal, "Bear") == 0)//Bear  -------------------------
	{

		if ((Animal & 0x0004) >> 8)
			cout << "You have " << NameAnimal;

		else
			cout << "You haven't the " << NameAnimal;

	}//if
}

void printAvailableAnimals(uShort Animal) {


	if (getNumWeapons != 0)
	{
		cout << "Your Animals:\n";
		for (int i = 0; i < 3; i++)
		{

			if (Animal & 0x0001)
			{
				if (i == 0)
					cout << "- Dog.\n";

				if (i == 1)
					cout << "- Wolf.\n";

				if (i == 2)
					cout << "- Bear.\n";

			}//if
			Animal = Animal >> 1;
		}//for
	}

	else
		cout << "You have no Animal.\n";
		
}