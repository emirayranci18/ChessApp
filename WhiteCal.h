#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "WhiteTas.h"

using namespace std;

class WhiteCal
{
private:

	string permString;
	char lastChar, firstChar;
	int permX, permY;

public:

	char Cal(char tasLast, char tasFirst, int x, int y, vector<vector<string>> tahta);
	WhiteTas wTas;

};