#include "BlackTas.h"

int BlackTas::Piyon(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {

    
    if ((tahta[y][x] != "--")) {       // Belirtilen konum e�er bo� ise istenilen ta�a g�re return 0 de�eri d�nd�r�l�r ve di�er ta�lara ge�i� yap�l�r. Bo� de�ilse ta� kontrol� yap�l�r.
        if (tahta[y][x].at(0) == 'p') {    // Mevcut ta� e�er istenilen ta� ise bir a�ama daha ileri gidilir. E�er de�ilse return 1 de�eri d�nd�r�l�r.
            if ((tahta[y][x].back() != tasLast)) {  // Kontrol edilen ta� mevcut ta�la ayn� renkte de�ilse return de�eri 2 olarak d�nd�r�l�r.
               
                return 2;                               

            }
        }

        return 1;
    }
    else
        return 0;


}

int BlackTas::Kale(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {


    if ((tahta[y][x]!= "--")) {
        if (tahta[y][x].at(0) == 'k') {
            if (tahta[y][x].back() != tasLast) {
                
         
                return 2;

            }
        }

        return 1;
    }
    else
        return 0;
}

int BlackTas::At(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {

    if (tahta[y][x]!= "--") {
        if (tahta[y][x].at(0) == 'a') {
            if (tahta[y][x].back() != tasLast) {
  

                return 2;

            }
        }

        return 1;
    }
    else
        return 0;

}

int BlackTas::Fil(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {



    if ((tahta[y][x]!= "--")) {
        if (tahta[y][x].at(0) == 'f') {
            if (tahta[y][x].back() != tasLast) {



                return 2;

            }
        }

        return 1;
    }
    else
        return 0;

}

int BlackTas::Vezir(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {

    tasKonum.push_back(tahta[y][x].at(0)); tasKonum.push_back(tasLast);

    if ((tahta[y][x]!= "--")) {
        if (tahta[y][x].at(0) == 'v') {
            if (tahta[y][x].back() != tasLast) {

         

                return 2;

            }
        }

        return 1;
    }
    else
        return 0;

}


int BlackTas::Sah(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {

    tasKonum.push_back(tahta[y][x].at(0)); tasKonum.push_back(tasLast);

    if ((tahta[y][x]!= "--")) {
        if (tahta[y][x].at(0) == 's') {
            if (tahta[y][x].back() != tasLast) {

           

                return 2;

            }
        }

        return 1;
    }
    else
        return 0;

}
