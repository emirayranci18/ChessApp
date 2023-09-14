Genel:
* Geliştirilen proje bir Satrançta puan hesaplama projesidir.
* C++ dili ile Visual Studio üzerinde geliştirilmiştir.
* Her class'ın header dosyasında tüm tanımlamalar yapılmıştır.
* Verilen örneklerde bazı hatalar mevcuttur. Onlar göz ardı edilmiştir.


Çalışma ve Algoritma:
* ChessApp class'ı üzerinden run edildiği zaman konsol ekranında sonuçlar gösterilir.
* Algoritma: 0x0'dan kontrol yaparak başlanır. Eğer mevcut kare boşsa devam edilir. Eğer herhangi bir taş varsa taşın rengine göre taşı tehdit edebilecek tüm taşların imkanı kontrol edilir (Sırayla piyon, kale, at, fil, vezir, şah). Sonrasında eğer mevcut konumdaki tehdit eden bir taş varsa o taş cezalı taş olarak işaretlenir ve bir sonraki kareden devam edilir.. Tüm karelerde bu işlemler yapıldıktan sonra mevcut taşlardan cezalı taşlar çıkarılarak belirtilen puanlama sistemine göre puanlamalar oluşturulur.
* Toplamda 6 tane class'dan oluşmaktadır.
* ChessApp Classı main class'dır.
* Parse class'ı dosya okuma işlemini gerçekleştirir ve tüm kareleri "tahta" isimli vektöre aktarır. Sonrasında yapılan kontroller sonrası renklerine göre WhiteCal veya BlackCal classlarına gönderilir.
* WhiteCal ve BlackCal class'ları tehdit edebilecek taş hamlelerini yaparak herhangi bir tehdit durumu için BlackTas veya WhiteTas class'larına gönderir.
* WhiteTas ve BlackTas class'ında kontroller yapıldıktan sonra taşlar cezalı olarak işaretlenir. Eğer tehdit durumu yoksa geçilir.
* Son olarak return değerleri sonucunda tüm işlemler bittikten sonra Parse class'ında puanlama hesapları yapılır.   
