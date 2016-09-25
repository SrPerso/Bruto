//- -------- system -----------------
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Capabilities.h"
#include "global.h"



//------------------------------------


//level...............................................
void WhatLevel(const capability& Capabilities)//what
{

	cout << "- Level :" << Capabilities.Level << " -";

}

void SetLevel(capability& Capabilities)//set
{
	uShort level;
	cout << "Set level: ";
	cin >> level;

	if ((level >= 0) && (level <= 100))
	{
		Capabilities.Level = level;
		cout << "Your level is " << Capabilities.Level << ".\n";
	}

	else
		cout << "You can't set this Level.\n";	
}

void UpLevel(capability& capabilities)//UP
{
	uShort level;
	cout << "Increment by: ";
	cin >> level;

	if (((level + capabilities.Level) >= 0) && ((level + capabilities.Level) <= 100))
	{
		capabilities.Level += level;
		cout << "Your level is " << capabilities.Level << ".\n";
	}

	else
		cout << "You can't increment this valor .\n";
	
}

void DownLevel(capability& capabilities)//DOWN
{
	uShort level;
	cout << "Decrement by: ";
	cin >> level;

	if (((capabilities.Level -level) >= 0) && ((capabilities.Level-level) <= 100))
	{
		capabilities.Level -= level;
		cout << "Your level is " << capabilities.Level << ".\n";
	}

	else
		cout << "You can't decrement this valor .\n";

}


//Life...............................................
void WhatLife(const capability& Capabilities)//what
{

	cout << "- Life :" << Capabilities.Life << " -";

}

void SetLife(capability& Capabilities)//set
{
	uShort life;
	cout << "Set life: ";
	cin >> life;

	if ((life >= 0) && (life <= 100))
	{
		Capabilities.Life = life;
		WhatLife(Capabilities);
	}

	else
		cout << "You can't set this life.\n";
}

void UpLife(capability& capabilities)//UP
{
	uShort life;
	cout << "Increment by: ";
	cin >> life;

	if (((life + capabilities.Life) >= 0) && ((life + capabilities.Life) <= 100))
	{
		capabilities.Life += life;
		WhatLife(capabilities);
	}

	else
		cout << "You can't increment this valor .\n";

}

void DownLife(capability& capabilities)//DOWN
{
	uShort life;
	cout << "Decrement by: ";
	cin >> life;

	if (((capabilities.Life - life) >= 0) && ((capabilities.Life - life) <= 100))
	{
		capabilities.Life -= life;
		WhatLife(capabilities);
	}

	else
		cout << "You can't decrement this valor .\n";

}


//strength...............................................
void WhatStrength(const capability& Capabilities)//what
{

	cout << "- Strength :" << Capabilities.Strength << " -";

}

void SetStrength(capability& Capabilities)//set
{
	uShort strength;
	cout << "Set strength: ";
	cin >> strength;

	if ((strength >= 0) && (strength <= 100))
	{
		Capabilities.Strength = strength;
		WhatStrength(Capabilities);
	}

	else
		cout << "You can't set this strength.\n";
}

void UpStrength(capability& capabilities)//UP
{
	uShort strength;
	cout << "Increment by: ";
	cin >> strength;

	if (((strength + capabilities.Strength) >= 0) && ((strength + capabilities.Strength) <= 100))
	{
		capabilities.Strength += strength;
		WhatStrength(capabilities);
	}

	else
		cout << "You can't increment this valor .\n";

}

void DownStrength(capability& capabilities)//DOWN
{
	uShort strength;
	cout << "Decrement by: ";
	cin >> strength;

	if (((capabilities.Strength - strength) >= 0) && ((capabilities.Strength - strength) <= 100))
	{
		capabilities.Strength -= strength;
		WhatStrength(capabilities);
	}

	else
		cout << "You can't decrement this valor .\n";

}


//Agility...............................................
void WhatAgility(const capability& Capabilities)//what
{

	cout << "- Agility :" << Capabilities.Agility << " -";

}

void SetAgility(capability& Capabilities)//set
{
	uShort agility;
	cout << "Set agility: ";
	cin >> agility;

	if ((agility >= 0) && (agility <= 100))
	{
		Capabilities.Agility = agility;
		WhatAgility(Capabilities);
	}

	else
		cout << "You can't set this agility.\n";
}

void UpAgility(capability& capabilities)//UP
{
	uShort agility;
	cout << "Increment by: ";
	cin >> agility;

	if (((agility + capabilities.Agility) >= 0) && ((agility + capabilities.Agility) <= 100))
	{
		capabilities.Agility += agility;
		WhatAgility(capabilities);
	}

	else
		cout << "You can't increment this valor .\n";

}

void DownAgility(capability& capabilities)//DOWN
{
	uShort agility;
	cout << "Decrement by: ";
	cin >> agility;

	if (((capabilities.Agility - agility) >= 0) && ((capabilities.Agility - agility) <= 100))
	{
		capabilities.Agility -= agility;
		WhatAgility(capabilities);
	}

	else
		cout << "You can't decrement this valor .\n";

}

//speed...............................................
void WhatSpeed(const capability& Capabilities)//what
{

	cout << "- Speed :" << Capabilities.Speed << " -";

}

void SetSpeed(capability& Capabilities)//set
{
	uShort speed;
	cout << "Set Speed: ";
	cin >> speed;

	if ((speed >= 0) && (speed <= 100))
	{
		Capabilities.Speed = speed;
		WhatSpeed(Capabilities);
	}

	else
		cout << "You can't set this speed.\n";
}

void UpSpeed(capability& capabilities)//UP
{
	uShort speed;
	cout << "Increment by: ";
	cin >> speed;

	if (((speed + capabilities.Speed) >= 0) && ((speed + capabilities.Speed) <= 100))
	{
		capabilities.Speed += speed;
		WhatSpeed(capabilities);
	}

	else
		cout << "You can't increment this valor .\n";

}

void DownSpeed(capability& capabilities)//DOWN
{
	uShort speed;
	cout << "Decrement by: ";
	cin >> speed;

	if (((capabilities.Speed - speed) >= 0) && ((capabilities.Speed - speed) <= 100))
	{
		capabilities.Speed -= speed;
		WhatSpeed(capabilities);
	}

	else
		cout << "You can't decrement this valor .\n";

}



//All Capabilities...............................................
void WhatAll(const capability& Capabilities)//what
{
	cout << "- Level :" << Capabilities.Level << " -";
	cout << "- Life :" << Capabilities.Life << " -";
	cout << "- Strength :" << Capabilities.Strength << " -";
	cout << "- Agility :" << Capabilities.Agility << " -";
	cout << "- Speed :" << Capabilities.Speed << " - \n";

}

void SetAll(capability& Capabilities)//set
{
	uShort all;
	cout << "Set all: ";
	cin >> all;

	if ((all >= 0) && (all <= 100))
	{
		Capabilities.Level = all;
		Capabilities.Life = all;
		Capabilities.Strength = all;
		Capabilities.Agility = all;
		Capabilities.Speed = all;

		WhatAll(Capabilities);
	}

	else
		cout << "You can't set this speed.\n";
}

void UpAll(capability& Capabilities)//UP
{
	uShort all;
	cout << "Increment by: ";
	cin >> all;

	if ((((all + Capabilities.Level) >= 0) && ((all + Capabilities.Level) <= 100))&&
		(((all + Capabilities.Life) >= 0) && ((all + Capabilities.Life) <= 100))&&
		(((all + Capabilities.Strength) >= 0) && ((all + Capabilities.Strength) <= 100))&&
		(((all + Capabilities.Agility) >= 0) && ((all + Capabilities.Agility) <= 100))&&
		(((all + Capabilities.Speed) >= 0) && ((all + Capabilities.Speed) <= 100))	)
	{

		Capabilities.Level += all;
		Capabilities.Life += all;
		Capabilities.Strength += all;
		Capabilities.Agility += all;
		Capabilities.Speed += all;
		WhatAll(Capabilities);
	}

	else
		cout << "You can't increment this valor .\n";

}

void DownAll(capability& Capabilities)//DOWN
{
	uShort all;
	cout << "Decrement by: ";
	cin >> all;

	if ((((Capabilities.Level - all) >= 0) && ((Capabilities.Level - all) - all <= 100)) &&
		(((Capabilities.Life - all) >= 0) && ((Capabilities.Life - all) <= 100)) &&
		(((Capabilities.Strength - all) >= 0) && ((Capabilities.Strength - all) <= 100)) &&
		(((Capabilities.Agility - all) >= 0) && ((Capabilities.Agility - all) <= 100)) &&
		(((Capabilities.Speed - all) >= 0) && ((Capabilities.Speed - all) <= 100)))
	{

		Capabilities.Level -= all;
		Capabilities.Life -= all;
		Capabilities.Strength -= all;
		Capabilities.Agility -= all;
		Capabilities.Speed -= all;
		WhatAll(Capabilities);
	}

	else
		cout << "You can't decrement this valor .\n";

}
