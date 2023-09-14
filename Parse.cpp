#include "Parse.h"
#include <iostream>

vector<vector<string>> tahta(8, vector<string>(8));  // Satran� tahtas� b�y�kl���nde 2 boyutlu matris i�in bir vector yarat�l�r.

void Parse::Parsing()
{
	
	fileName = "chess/board3.txt";	// TXT dosyas�ndan veriler al�n�r. �stenilen modele g�re de�i�tirilir.
	file.open(fileName.c_str());

	while (file >> word)          
	{
		tahta[i][j] = word;		// Dosya okunurken her bo�lukta bir olu�turulan 7'ye 7 vekt�re atan�r.
		i++;					// Sat�r de�eri s�rekli artt�r�l�r.
		if (i == 8) {			// Sat�r bitti�inde yeni bir s�tuna ge�ilir ve sat�r 0'dan ba�lat�l�r.
			i = 0;
			j++;
		}
	}							// T�m de�erler bitti�inde ge�ilir.

	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			Spliting(tahta[b][a],a,b);		// Tahta vekt�r�ne atanan de�erler Spliting fonksiyonuna t�m i�lemler i�in s�rayla g�nderilir.
		}
	}

	Toplam();

}

void Parse::Spliting(string tas, int x, int y) {
	
	firstChar = tas.at(0);					// Tahtadaki ilk de�er ta��n ismi oldu�undan ayr��t�r�l�r.
	lastChar = tas.back();					// Tahtadaki ikinci de�er ta��n rengi oldu�undan bu de�er de ayr��t�r�l�r.

	if ('s' == lastChar) {					// E�er ta��n rengi siyahsa bu k�sma girilir.

		if (firstChar == 'p')
			saglamSiyahP += 1;

		else if (firstChar == 'k')
			saglamSiyahK += 1;

		else if (firstChar == 'a')				// Her ta� s�rayla kontrol edilirken her bir ta� tehlikede de olsa tehlikede olmasada burada toplan�r.
			saglamSiyahA += 1;

		else if (firstChar == 'f')
			saglamSiyahF += 1;

		else if (firstChar == 'v')
			saglamSiyahV += 1;

		else if (firstChar == 's')
			saglamSiyahS += 1;

		if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 'p') {
			cezaSiyahP += 1;
		}
		else if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 'k') {
			cezaSiyahK += 1;
		}
		else if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 'a') {				
			cezaSiyahA += 1;
		}
		else if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 'f') {		// BlackCal.cpp class�ndaki kontroller sonra return de�erine g�re cezal� olup olmad���na g�re cezal� ta� say�s� toplan�r.
			cezaSiyahF += 1;
		}
		else if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 'v') {
			cezaSiyahV += 1;
		}
		else if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 's') {
			cezaSiyahS += 1;
		}


	}
	else if ('b' == lastChar) {

		if (firstChar == 'p')
			saglamBeyazP += 1;

		else if (firstChar == 'k')
			saglamBeyazK += 1;

		else if (firstChar == 'a')
			saglamBeyazA += 1;

		else if (firstChar == 'f')					// Her ta� s�rayla kontrol edilirken her bir ta� tehlikede de olsa tehlikede olmasada burada toplan�r.
			saglamBeyazF += 1;

		else if (firstChar == 'v')
			saglamBeyazV += 1;

		else if (firstChar == 's')
			saglamBeyazS += 1;

		if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 'p') {
			cezaBeyazP += 1;
		}
		else if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 'k') {
			cezaBeyazK += 1;
		}
		else if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 'a') {
			cezaBeyazA += 1;
		}
		else if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 'f') {		// WhiteCal.cpp class�ndaki kontroller sonra return de�erine g�re cezal� olup olmad���na g�re cezal� ta� say�s� toplan�r.
			cezaBeyazF += 1;
		}
		else if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 'v') {
			cezaBeyazV += 1;
		}
		else if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 's') {
			cezaBeyazS += 1;
		}

	}
}

void Parse::Toplam() {

	
	saglamBeyazP = saglamBeyazP - cezaBeyazP;
	saglamBeyazK = saglamBeyazK - cezaBeyazK;
	saglamBeyazA = saglamBeyazA - cezaBeyazA;
	saglamBeyazF = saglamBeyazF - cezaBeyazF;				// Mevcut ta� say�s�ndan cezal� ta� say�s� ��kar�l�r, tehlikede olan ve olmayan ta�lar hesaplan�r.
	saglamBeyazV = saglamBeyazV - cezaBeyazV;					
	saglamBeyazS = saglamBeyazS - cezaBeyazS;

	saglamSiyahP = saglamSiyahP - cezaSiyahP;
	saglamSiyahK = saglamSiyahK - cezaSiyahK;
	saglamSiyahA = saglamSiyahA - cezaSiyahA;
	saglamSiyahF = saglamSiyahF - cezaSiyahF;
	saglamSiyahV = saglamSiyahV - cezaSiyahV;
	saglamSiyahS = saglamSiyahS - cezaSiyahS;

	beyazPoint = (saglamBeyazP * 1) + (saglamBeyazK * 5) + (saglamBeyazA * 3) + (saglamBeyazF * 3) + (saglamBeyazV * 9) + (saglamBeyazS * 100) + (cezaBeyazP * 0.5) + (cezaBeyazK * 2.5) + (cezaBeyazA * 1.5) + (cezaBeyazF * 1.5) + (cezaBeyazV * 4.5) + (cezaBeyazS * 50);
	siyahPoint = (saglamSiyahP * 1) + (saglamSiyahK * 5) + (saglamSiyahA * 3) + (saglamSiyahF * 3) + (saglamSiyahV * 9) + (saglamSiyahS * 100) + (cezaSiyahP * 0.5) + (cezaSiyahK * 2.5) + (cezaSiyahA * 1.5) + (cezaSiyahF * 1.5) + (cezaSiyahV * 4.5) + (cezaSiyahS * 50);

	// Belirtilen puanlara g�re cezal� ve cezal� olmayan ta�lar�n hesab� yap�l�r ve renklerin puan� hesaplan�r.

	cout << "Siyah Puan: " << siyahPoint << "\nBeyaz Puan: " << beyazPoint;

}