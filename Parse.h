#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "BlackCal.h"
#include "WhiteCal.h"
#include "BlackTas.h"

using namespace std;


class Parse
{

private:

	fstream file;
	string word, fileName;
	int i = 0, j = 0;
	string permString;
	char lastChar, firstChar;
	float beyazPoint=0, siyahPoint=0;

	

public:
	int count = 8;
	void Parsing();
	void Spliting(string tas, int x, int y);
	void Toplam();
	BlackCal blCal;
	WhiteCal whCal;
	BlackTas bTas;
	int b = 15;

	float cezaSiyahP = 0, cezaSiyahK = 0, cezaSiyahA = 0, cezaSiyahF = 0, cezaSiyahV = 0, cezaSiyahS = 0;
	float saglamSiyahP = 0, saglamSiyahK = 0, saglamSiyahA = 0, saglamSiyahF = 0, saglamSiyahV = 0, saglamSiyahS = 0;
	float cezaBeyazP = 0, cezaBeyazK = 0, cezaBeyazA = 0, cezaBeyazF = 0, cezaBeyazV = 0, cezaBeyazS = 0;
	float saglamBeyazP = 0, saglamBeyazK = 0, saglamBeyazA = 0, saglamBeyazF = 0, saglamBeyazV = 0, saglamBeyazS = 0;

	
};

