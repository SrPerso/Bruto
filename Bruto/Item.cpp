//- -------- system -----------------
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned short uShort;
using namespace std;


uShort getNumWeapons(uShort NumWeapons) {

	return NumWeapons;
}

void setWeapon(char* NameWeapon, uShort& NumWeapons) {
	
	if (strcmp(NameWeapon, "Sword") == 0)//sword
	{

		if ((NumWeapons & 0x1000) >> 8)
			cout << "You have " << NameWeapon << " already.\n";
		
		else		
			NumWeapons = NumWeapons | 0x1000;
		
	}

	else if (strcmp(NameWeapon, "Knife") == 0)//knife
	{

		if ((NumWeapons & 0x0020) >> 5)
			cout << "You have " << NameWeapon << " already.\n";
		
		else
			NumWeapons = NumWeapons | 0x0020;
		
	}

	else//error
		cout << "There is a error, this weapon doesn't exists\n";

}

const void hasWeapon(char*NameWeapon,const uShort & NumWeapons) {

	if (strcmp(NameWeapon, "Sword") == 0)//sword
	{

		if ((NumWeapons & 0x1000) >> 8)
			cout << "You have " << NameWeapon;

		else
			cout << "You haven't the " << NameWeapon;

	}

	else if (strcmp(NameWeapon, "Knife") == 0)//knife
	{

		if ((NumWeapons & 0x0020) >> 5)
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
	{
		cout << "You have no weapons.\n";
	}

}

//animals

unsigned short getNumAnimals(uShort);

void setAnimal(char*, uShort*);

void hasAnimal(char*, uShort);

void printAvailableAnimals(uShort);