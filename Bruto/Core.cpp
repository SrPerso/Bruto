
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


Update_status OnGame() {

	Update_status ret= UPDATE_CONTINUE;

	char* name = new char[20];
	*name = NULL;

	char* clan = new char[20];
	clan = nullptr;

	char WeaponName[10];
	char AnimalName[10];


	uShort Disciplines = 0;
	uShort* PointDisciplnes = &Disciplines;

	char NameWeapon[20];
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

	while (ret!=UPDATE_STOP||ret!=UPDATE_ERROR) {
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
			break;

		default:
			cout << "\n\n try again \n\n";
			ret = UPDATE_CONTINUE;
			break;


		}




	}
	
	return ret;
}

