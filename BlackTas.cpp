#include "BlackTas.h"

int BlackTas::Piyon(char tasFirst, char tasLast, int x,  int y, vector<vector<string>> tahta) {

    
    if ((tahta[y][x] != "--")) {       // Belirtilen konum eğer boş ise istenilen taşa göre return 0 değeri döndürülür ve diğer taşlara geçiş yapılır. Boş değilse taş kontrolü yapılır.
        if (tahta[y][x].at(0) == 'p') {    // Mevcut taş eğer istenilen taş ise bir aşama daha ileri gidilir. Eğer değilse return 1 değeri döndürülür.
            if ((tahta[y][x].back() != tasLast)) {  // Kontrol edilen taş mevcut taşla aynı renkte değilse return değeri 2 olarak döndürülür.
               
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
