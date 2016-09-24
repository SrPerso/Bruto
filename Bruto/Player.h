#ifndef _PLAYER_
#define _PLAYER_

typedef unsigned short uShort;
//name

void setName(char&);

char* getName(char*);

void printName(const char*);

//disciples

void setDisciples(uShort&);

uShort getDisciples(const uShort );

const void printDisciples(const uShort);


//clan name
void setClanName(char&);

char* getClanName(char*);

void printClanName(const char&);


//tournament
void registerNextTournament(bool&);

bool isRegisteredNextTournament(const bool);

void printRegisterStatus(const bool);

#endif