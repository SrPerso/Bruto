
#ifndef _GLOBAL_
#define _GLOBAL_

enum main_states
{
	MAIN_START,
	MAIN_UPDATE,
	MAIN_FINISH,
	MAIN_EXIT
};

enum Update_status
{
	UPDATE_CONTINUE,
	UPDATE_STOP,
	UPDATE_ERROR
};


typedef unsigned short uShort;
using namespace std;

Update_status OnGame();

//void Intro();
//void Outro();


#endif