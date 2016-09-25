#ifndef _ITEM_
#define _ITEM_

#include "global.h"

//weapons

uShort getNumWeapons(uShort);

void setWeapon(char*, uShort&);

const void hasWeapon(char*,const uShort&);

void printAvailableWeapons(uShort&);

//animals

unsigned short GetNumAnimals(uShort);

void setAnimal(char*, uShort&);

const void hasAnimal(char*,const uShort&);

void printAvailableAnimals(uShort);

#endif