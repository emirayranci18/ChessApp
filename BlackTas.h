#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class BlackTas
{
private:

	string permString;
	char lastChar, firstChar;
	int permX, permY;
	string tasKonum;
	

public:

	int Piyon(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta);
	int Kale(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta);
	int At(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta);
	int Fil(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta);
	int Vezir(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta);
	int Sah(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta);
	void EklemeBlack(char tasLast);
	
};