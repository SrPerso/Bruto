#ifndef _ITEM_
#define _ITEM_

typedef unsigned short uShort;

//weapons

uShort getNumWeapons(uShort);

void setWeapon(char*, uShort&);

const void hasWeapon(char*,const uShort&);

void printAvailableWeapons(uShort&);

//animals

//unsigned short getnumanimals(ushort);
//
//void setanimal(char*, ushort*);
//
//const void hasanimal(char*,const ushort&);
//
//void printavailableanimals(ushort);

#endif