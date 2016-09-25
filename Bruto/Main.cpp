//- -------- system -----------------
#include "Global.h"
//------------------------------------
#include <iostream>

int main() {

	main_states state = MAIN_START;

	while (state != MAIN_EXIT)
	{
		switch (state) {


		case MAIN_START: //...........................

			//system("color 0E");//black yellow
			//Intro();

			state = MAIN_UPDATE;
			break;


		case MAIN_UPDATE: //...........................
		
			if(OnGame()== UPDATE_STOP)
				state = MAIN_FINISH;
			if (OnGame() == UPDATE_ERROR)
				cout<<"\n\n THERE WAS AN ERROR IN THE UPDATE \n\n";
		
		break;

		case MAIN_FINISH: //...........................

			//Outro();
			state = MAIN_EXIT;

			break;

		}
	}

	return 0;
}