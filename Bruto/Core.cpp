
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
#include "Global.h"


Update_status OnGame(){

	Update_status ret= UPDATE_CONTINUE;

	char* name = new char[20];
	*name = NULL;

	char* clan = new char[20];
	clan = nullptr;

	char WeaponName[20];
	char AnimalName[10];
	uShort animal = 0;

	uShort Disciplines = 0;
	uShort* PointDisciplnes = &Disciplines;


	uShort Weapons = 0;
	uShort NumWeapons = 0;

	bool tournament = false;

	uShort NumAnimals = 0;

	capability capabilites;
	capability* Capabilities;
	Capabilities = &capabilites;

	uShort respose=0;

	cout << "\n\t\tWhat is your Bruto Name? : \t>>";
	setName(name);
	cout << "\n\t\tWhat is your Bruto clan? : \t>>";
	setClanName(clan);

	system("cls");

	cout << "\n\t\t WELLCOME"<< name<<" you can select that functions \n";

	while (ret != UPDATE_STOP || ret != UPDATE_ERROR) {
		system("CLS");
		cout << "\n\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n";
		cout << "|1||Set player name||||||||12|Set Weapon|||||||||||||||| \n";
		cout << "|2||Get player name||||||||13|Has Weapon|||||||||||||||| \n";
		cout << "|3||Print player name||||||14|Print Weapons||||||||||||| \n";
		cout << "|4||Set disciples||||||||||15|Get number of animals||||| \n";
		cout << "|5||Get disciples||||||||||16|Set animal||||||||||||||||\n";
		cout << "|6||Print disciples||||||||17|has animal|||||||||||||||| \n";
		cout << "|7||Set Clan Name||||||||||18|print animals||||||||||||| \n";
		cout << "|8||get Clan Name||||||||||19|Register next tournament|| \n";
		cout << "|9||Print Clan Name||||||||20|get register status||||||| \n";
		cout << "|10|Set Capabilities|||||||21|Print register status||||| \n";
		cout << "|11|Get number of Weapons||22|Quit|||||||||||||||||||||| \n";
		cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n";
		cout << "\n\t\tOption: ";
		cin >> respose;

		if (respose == 22)
			return UPDATE_STOP;

		/*else if (respose = 10)
			FunCapabilities();*/

		switch (respose) {
			
		case 1:
			setName(name);
			break;
		case 2:
			getName(name);
			break;
		case 3:
			printName(name);
			break;
		case 4:
			setDisciples(&Disciplines);
			break;
		case 5:
			getDisciples(Disciplines);
			break;
		case 6:
			printDisciples(Disciplines);
			break;
		case 7:
			setClanName(clan);
			break;
		case 8:
			getClanName(clan);
			break;
		case 9:
			printClanName(clan);
			break;
		case 10:


			break;
		case 11:
			NumWeapons = getNumWeapons(Weapons);
			break;
		case 12:
			cout << "What weapon";
			cin >> WeaponName;
			setWeapon(WeaponName, Weapons);
			break;
		case 13:
			cout << "What weapon?";
			cin >> WeaponName;
			hasWeapon(WeaponName, Weapons);
			break;
		case 14:
			printAvailableWeapons(Weapons);
			break;
		case 15:
			NumAnimals = GetNumAnimals(animal);
			break;
		case 16:
			cout << "Name of animal? ";
			cin >> AnimalName;
			setAnimal(AnimalName, animal);
			break;
		case 17:
			cout << "Name of animal? ";
			cin >> AnimalName;
			hasAnimal(AnimalName, animal);
			break;
		case 18:
			printAvailableAnimals(animal);
			break;
		case 19:
			registerNextTournament(tournament);
			break;
		case 20:
			isRegisteredNextTournament(tournament);
			break;
		case 21:
			printRegisterStatus(tournament);
			break;
		case 22:
			ret = UPDATE_STOP;
			break;
		default:
			cout << "\n\n try again \n\n";
			ret = UPDATE_CONTINUE;
			break;
		
		}

		}
	return ret;
}

