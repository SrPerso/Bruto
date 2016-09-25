//- -------- system -----------------

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//-----------headers------------------

#include "player.h"
#include "Item.h"
#include "Capabilities.h"

typedef unsigned short uShort;

//---------enum s----------------

enum main_states
{
	MAIN_START,
	MAIN_UPDATE,
	MAIN_FINISH,
	MAIN_EXIT
};

//------------------------------------

//------------------------------------

int main() {

	main_states state = MAIN_START;


	char* name=new char[20];
	char* clan = new char[20];
	
	char WeaponName[10];
	char AnimalName[10];


	uShort NumDisciplines = 0;
	uShort NumWeapons = 0;
	uShort NumAnimals = 0;

	capability capabilites;
	capability* Capabilities;
	Capabilities = &capabilites;
	
	while (state != MAIN_EXIT)
	{
		switch (state) {


		case MAIN_START: //...........................

			//system("color 0E");//black yellow
			

			state = MAIN_UPDATE;
			break;


		case MAIN_UPDATE: //...........................
		


			state = MAIN_FINISH;
		
		break;

		case MAIN_FINISH: //...........................


			state = MAIN_EXIT;

			break;

		}
	}

	return 0;
}