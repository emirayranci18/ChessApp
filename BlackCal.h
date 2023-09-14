#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "BlackTas.h"


using namespace std;

class BlackCal
{
private:

	string permString;
	char lastChar, firstChar;
	int permX, permY;
	

public:

	char Cal(char tasLast, char tasFirst, int x, int y, vector<vector<string>> tahta);
	BlackTas bTas;

	
};

