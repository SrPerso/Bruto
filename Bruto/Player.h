#ifndef _PLAYER_
#define _PLAYER_

#include "global.h"
//name

void setName(char*);

char* getName(char*);

void printName(const char*);

//disciples

void setDisciples(uShort*);

uShort getDisciples(const uShort );

const void printDisciples(const uShort);


//clan name
void setClanName(char*);

char* getClanName(char*);

void printClanName(char*);


//tournament
void registerNextTournament(bool&);

bool isRegisteredNextTournament(const bool);

void printRegisterStatus(const bool);

#endif