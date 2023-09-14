#include "WhiteCal.h"

char WhiteCal::Cal(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta) {


    permX = x;
    permY = y;

    permX--;            // Beyaz ta�� tehdit edecek siyah piyon �aprazda olaca�� i�in ilk kontrol yap�l�r.
    permY--;

    if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
        if (wTas.Piyon(tasFirst, tasLast, permX, permY, tahta) == 2) {      // BlackTas.cpp class�ndaki i�lemlere g�re e�er mevcut beyaz ta�� tehdit eden bir siyah piyon varsa tehdit edilen ta�a g�re return de�eri d�nd�r�l�r.
            return tasFirst;
        }

    }

    permX = x;          //X ve Y de�erleri hep bir i�lem sonras� s�rekli s�f�rlan�r.
    permY = y;

    permX--;            // Beyaz ta�� tehdit edecek beyaz siyah �aprazda olaca�� i�in ikinci kontrol yap�l�r.
    permY++;

    if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
        if (wTas.Piyon(tasFirst, tasLast, permX, permY, tahta) == 2) {          
            return tasFirst;
        }

    }

    permX = x;
    permY = y;

    for (int c = permX + 1; c < 8; c++) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Kale(tasFirst, tasLast, c, permY, tahta) == 2) {           // Ta�lar� kaleler sadece d�z tehdit edebilece�i i�in d�zlemde hesaplamalar yap�l�r.
                return tasFirst;
            }

            else if (wTas.Kale(tasFirst, tasLast, c, permY, tahta) == 1) {       // Return de�eri 1 olarak geldi�i zaman belirtilen konumda istenilen ta�tan bir ta� oldu�u i�in d�ng� s�f�rlan�r.
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (int c = permY + 1; c < 8; c++) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Kale(tasFirst, tasLast, permX, c, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Kale(tasFirst, tasLast, permX, c, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (int c = permX - 1; c > -1; c--) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Kale(tasFirst, tasLast, c, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Kale(tasFirst, tasLast, c, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (int c = permY - 1; c > -1; c--) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Kale(tasFirst, tasLast, permX, c, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Kale(tasFirst, tasLast, permX, c, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;
    permX++;
    permY += 2;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {              // 8 tane at hamlesine g�re i�lemler yap�l�r.
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX--;
    permY += 2;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX++;
    permY -= 2;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX--;
    permY -= 2;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX += 2;
    permY--;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX += 2;
    permY++;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX -= 2;
    permY++;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }
        }
    }

    permX = x;
    permY = y;
    permX -= 2;
    permY--;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }
        }
    }

    permX = x;
    permY = y;
    permX++;
    permY++;
    while (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {               // Filler �apraz tehdit etti�i i�in t�m �apraz hamle i�lemleri kontrol edilir.
            if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX++;
        permY++;
    }

    permX = x;
    permY = y;
    permX--;
    permY++;
    while (8 > permX && permX > -1 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX--;
        permY++;
    }

    permX = x;
    permY = y;
    permX--;
    permY--;
    while (8 > permX && permX > -1 && 8 > permY && permY > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX--;
        permY--;
    }

    permX = x;
    permY = y;
    permX++;
    permY--;
    while (-1 < permX && permX < 8 && 8 > permY && permY > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX++;
        permY--;
    }

    permX = x;
    permY = y;
    permX++;
    permY++;

    while (-1 < permX && permX < 8 && -1 < permY && permY < 8) {                // Vezirin hamleleri kalenin ve filin hamlerinin ayn�s� oldu�undan ayn� i�lemler tekrar yap�l�r.
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX++;
        permY++;
    }

    permX = x;
    permY = y;
    permX--;
    permY++;
    while (8 > permX && permX > -1 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX--;
        permY++;
    }

    permX = x;
    permY = y;
    permX--;
    permY--;
    while (8 > permX && permX > -1 && 8 > permY && permY > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX--;
        permY--;
    }

    permX = x;
    permY = y;
    permX++;
    permY--;
    while (-1 < permX && permX < 8 && 8 > permY && permY > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
        permX++;
        permY--;
    }

    permX = x;
    permY = y;

    for (permX = x + 1; permX < 8; permX++) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (permY = y + 1; permY < 8; permY++) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;
    for (permX = x - 1; permX > -1; permX--) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;
    for (permY = y - 1; permY > -1; permY--) {

        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (wTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    permX++;
    permY++;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {                       // �ah sadece tek hamlelik �apraz gidebildi�i i�in �ah hamleleri kontrol edilir.
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {   
            if (wTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }
        }
    }

    permX = x;
    permY = y;

    permX++;
    permY--;

    if (-1 < permX && permX < 8 && 8 > permY && permY > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }
        }
    }

    permX = x;
    permY = y;

    permX--;
    permY--;

    if (8 > permX && permX > -1 && 8 > permY && permY > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;

    permX--;
    permY++;

    if (-1 < permY && permY < 8 && 8 > permX && permX > -1) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (wTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

}