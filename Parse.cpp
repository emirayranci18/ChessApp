#include "Parse.h"
#include <iostream>

vector<vector<string>> tahta(8, vector<string>(8));  // Satranç tahtasý büyüklüðünde 2 boyutlu matris için bir vector yaratýlýr.

void Parse::Parsing()
{
	
	fileName = "chess/board3.txt";	// TXT dosyasýndan veriler alýnýr. Ýstenilen modele göre deðiþtirilir.
	file.open(fileName.c_str());

	while (file >> word)          
	{
		tahta[i][j] = word;		// Dosya okunurken her boþlukta bir oluþturulan 7'ye 7 vektöre atanýr.
		i++;					// Satýr deðeri sürekli arttýrýlýr.
		if (i == 8) {			// Satýr bittiðinde yeni bir sütuna geçilir ve satýr 0'dan baþlatýlýr.
			i = 0;
			j++;
		}
	}							// Tüm deðerler bittiðinde geçilir.

	for (int a = 0; a < 8; a++) {
		for (int b = 0; b < 8; b++) {
			Spliting(tahta[b][a],a,b);		// Tahta vektörüne atanan deðerler Spliting fonksiyonuna tüm iþlemler için sýrayla gönderilir.
		}
	}

	Toplam();

}

void Parse::Spliting(string tas, int x, int y) {
	
	firstChar = tas.at(0);					// Tahtadaki ilk deðer taþýn ismi olduðundan ayrýþtýrýlýr.
	lastChar = tas.back();					// Tahtadaki ikinci deðer taþýn rengi olduðundan bu deðer de ayrýþtýrýlýr.

	if ('s' == lastChar) {					// Eðer taþýn rengi siyahsa bu kýsma girilir.

		if (firstChar == 'p')
			saglamSiyahP += 1;

		else if (firstChar == 'k')
			saglamSiyahK += 1;

		else if (firstChar == 'a')				// Her taþ sýrayla kontrol edilirken her bir taþ tehlikede de olsa tehlikede olmasada burada toplanýr.
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
		else if (blCal.Cal(firstChar, lastChar, x, y, tahta) == 'f') {		// BlackCal.cpp classýndaki kontroller sonra return deðerine göre cezalý olup olmadýðýna göre cezalý taþ sayýsý toplanýr.
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

		else if (firstChar == 'f')					// Her taþ sýrayla kontrol edilirken her bir taþ tehlikede de olsa tehlikede olmasada burada toplanýr.
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
		else if (whCal.Cal(firstChar, lastChar, x, y, tahta) == 'f') {		// WhiteCal.cpp classýndaki kontroller sonra return deðerine göre cezalý olup olmadýðýna göre cezalý taþ sayýsý toplanýr.
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
	saglamBeyazF = saglamBeyazF - cezaBeyazF;				// Mevcut taþ sayýsýndan cezalý taþ sayýsý çýkarýlýr, tehlikede olan ve olmayan taþlar hesaplanýr.
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

	// Belirtilen puanlara göre cezalý ve cezalý olmayan taþlarýn hesabý yapýlýr ve renklerin puaný hesaplanýr.

	cout << "Siyah Puan: " << siyahPoint << "\nBeyaz Puan: " << beyazPoint;

}