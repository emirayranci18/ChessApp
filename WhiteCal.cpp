#include "WhiteCal.h"

char WhiteCal::Cal(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta) {


    permX = x;
    permY = y;

    permX--;            // Beyaz taşı tehdit edecek siyah piyon çaprazda olacağı için ilk kontrol yapılır.
    permY--;

    if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
        if (wTas.Piyon(tasFirst, tasLast, permX, permY, tahta) == 2) {      // BlackTas.cpp classındaki işlemlere göre eğer mevcut beyaz taşı tehdit eden bir siyah piyon varsa tehdit edilen taşa göre return değeri döndürülür.
            return tasFirst;
        }

    }

    permX = x;          //X ve Y değerleri hep bir işlem sonrası sürekli sıfırlanır.
    permY = y;

    permX--;            // Beyaz taşı tehdit edecek beyaz siyah çaprazda olacağı için ikinci kontrol yapılır.
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
            if (wTas.Kale(tasFirst, tasLast, c, permY, tahta) == 2) {           // Taşları kaleler sadece düz tehdit edebileceği için düzlemde hesaplamalar yapılır.
                return tasFirst;
            }

            else if (wTas.Kale(tasFirst, tasLast, c, permY, tahta) == 1) {       // Return değeri 1 olarak geldiği zaman belirtilen konumda istenilen taştan bir taş olduğu için döngü sıfırlanır.
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
            if (wTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {              // 8 tane at hamlesine göre işlemler yapılır.
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
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {               // Filler çapraz tehdit ettiği için tüm çapraz hamle işlemleri kontrol edilir.
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

    while (-1 < permX && permX < 8 && -1 < permY && permY < 8) {                // Vezirin hamleleri kalenin ve filin hamlerinin aynısı olduğundan aynı işlemler tekrar yapılır.
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

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {                       // Şah sadece tek hamlelik çapraz gidebildiği için şah hamleleri kontrol edilir.
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