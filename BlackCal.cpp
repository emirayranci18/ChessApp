#include "BlackCal.h"

char BlackCal::Cal(char tasFirst, char tasLast, int x, int y, vector<vector<string>> tahta) {


    permX = x;              
    permY = y;

    permX++;                // Siyah taşı tehdit edecek beyaz piyon çaprazda olacağı için ilk kontrol yapılır.
    permY++;

    if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {                   // Tahtanın dışına çıkılmaması için kontrol yapılır.
        if (bTas.Piyon(tasFirst, tasLast, permX, permY, tahta) == 2) {          // BlackTas.cpp classındaki işlemlere göre eğer mevcut siyah taşı tehdit eden bir beyaz piyon varsa tehdit edilen taşa göre return değeri döndürülür.
            
            return tasFirst;                                                    // Return olarak tehdit edilen taşın ne olduğu döndürülüyor. Bu döndürme puan hesaplamasında kullanılıyor.
        }

    }

    permX = x;              //X ve Y değerleri hep bir işlem sonrası sürekli sıfırlanır.
    permY = y;

    permX++;                // Siyah taşı tehdit edecek beyaz piyon çaprazda olacağı için ikinci kontrol yapılır.
    permY--;

    if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
        if (bTas.Piyon(tasFirst, tasLast, permX, permY, tahta) == 2) {          
            return tasFirst;
        }

    }

    permX = x;
    permY = y;

    for (int c = permX + 1; c < 8; c++) {                                       // Taşları kaleler sadece düz tehdit edebileceği için düzlemde hesaplamalar yapılır.
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Kale(tasFirst, tasLast, c, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Kale(tasFirst, tasLast, c, permY, tahta) == 1) {     // Return değeri 1 olarak geldiği zaman belirtilen konumda istenilen taştan bir taş olduğu için döngü sıfırlanır.
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (int c = permY + 1; c < 8; c++) {                                       
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Kale(tasFirst, tasLast, permX, c, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Kale(tasFirst, tasLast, permX, c, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (int c = permX - 1; c > -1; c--) {                                      
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Kale(tasFirst, tasLast, c, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Kale(tasFirst, tasLast, c, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (int c = permY - 1; c > -1; c--) {                                      
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Kale(tasFirst, tasLast, permX, c, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Kale(tasFirst, tasLast, permX, c, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;
    permX++;
    permY += 2;

    if (-1 < permX && permX < 8 && -1 < permY && permY < 8) {                   // 8 tane at hamlesine göre işlemler yapılır.
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.At(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

        }
    }

    permX = x;
    permY = y;
    permX++;
    permY++;
    while (-1 < permX && permX < 8 && -1 < permY && permY < 8) {                // Filler çapraz tehdit ettiği için tüm çapraz hamle işlemleri kontrol edilir.
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Fil(tasFirst, tasLast, permX, permY, tahta) == 1) {
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

    while (-1 < permX && permX < 8 && -1 < permY && permY < 8) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {      // Vezirin hamleleri kalenin ve filin hamlerinin aynısı olduğundan aynı işlemler tekrar yapılır.
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {     
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
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;

    for (permY = y + 1; permY < 8; permY++) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;
    for (permX = x - 1; permX > -1; permX--) {
        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
                break;
            }
        }
    }

    permX = x;
    permY = y;
    for (permY = y - 1; permY > -1; permY--) {

        if (permX > -1 && permX < 8 && permY > -1 && permY < 8) {
            if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }

            else if (bTas.Vezir(tasFirst, tasLast, permX, permY, tahta) == 1) {
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
            if (bTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
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
            if (bTas.Sah(tasFirst, tasLast, permX, permY, tahta) == 2) {
                return tasFirst;
            }
        }
    }


}