//- -------- system -----------------

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//-----------headers------------------

#include "player.h"

enum main_states
{
	MAIN_START,
	MAIN_UPDATE,
	MAIN_FINISH,
	MAIN_EXIT
};
//------------------------------------

int main() {

	main_states state = MAIN_START;

	while (state != MAIN_EXIT)
	{
		switch (state) {


		case MAIN_START: //...........................

			//system("color 0E");//black yellow
			

			state = MAIN_UPDATE;
			break;


		case MAIN_UPDATE: //...........................
		{


			state = MAIN_FINISH;
		}
		break;

		case MAIN_FINISH: //...........................


			state = MAIN_EXIT;

			break;

		}
	}

	return 0;
}