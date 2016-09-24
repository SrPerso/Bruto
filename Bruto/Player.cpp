//- -------- system -----------------
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef unsigned short uShort;
using namespace std;

//------------------------------------

//name
void setName(char* name)
{
	cin >> name;
}
char* getName(char* name)
{
	return name;
}
void printName(const char* name)
{
	cout << name << endl;
}


//disciples

void setDisciples(uShort &Disciples) {

	uShort NumDisciples=0;
	cin >> NumDisciples;
	Disciples = NumDisciples;

}

uShort getDisciples(const uShort Disciples ) {
	return Disciples;
}

const void printDisciples(const uShort Disciples ){
	cout << Disciples;

}

//clan name

void setClanName(char& Clan) {
	cin >> Clan;
}

char* getClanName(char*Clan) {
	return Clan;
}

void printClanName(const char&Clan) {
	cout<<Clan;
}

//tournament

void registerNextTournament(bool&isRegistered) {

	if (isRegistered == true)
		cout << "you can't register, you are already registed \n ";

	else 
		isRegistered = true;
	
}

bool isRegisteredNextTournament(const bool isRegistered) {
	return isRegistered;
}

void printRegisterStatus(const bool isRegistered) {
	
	if (isRegistered == true)
		cout << "you are registered in a tournament \n ";

	else 
		cout << "you are NOT registered in a tournament \n ";
	

}