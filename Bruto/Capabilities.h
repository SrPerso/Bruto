#ifndef _CAPABILITIES_
#define _CAPABILITIES_


struct capability {

	uShort Level = 0;
	uShort Life = 0;
	uShort Strength = 0;
	uShort Agility = 0;
	uShort Speed = 0;

};

//level  x

void WhatLevel(const capability&);
void SetLevel(capability&);
void UpLevel(capability*);
void DownLevel(capability*);


//Life x
void WhatLife(const capability&);
void SetLife(capability&);
void UpLife(capability&);
void DownLife(capability&);

//strength x

void WhatStrength(const capability&);
void SetStrength(capability&);
void UpStrength(capability&);
void DownStrength(capability&);

//Agility x

void WhatAgility(const capability&);
void SetAgility(capability&);
void UpAgility(capability&);
void DownAgility(capability&);

//Speed x
void WhatSpeed(const capability&);
void SetSpeed(capability&);
void UpSpeed(capability&);
void DownSpeed(capability&);

//All Capabilities

void WhatAll(const capability&);
void SetAll(capability&);
void UpAll(capability&);
void DownAll(capability&);




#endif