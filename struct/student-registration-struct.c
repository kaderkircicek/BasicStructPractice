#include <stdio.h>
#include <string.h>

   struct Tarih {
   int gun;
   int ay;
    int yil;
    };



  struct Tarih Tarih_olustur(int gun, int ay, int yil) {
   struct Tarih t;
   if (gun > 31 || ay > 12)
        { t.gun = 0; t.ay = 0; t.yil = 0;}
    else {
     t.gun = gun;
     t.ay = ay;
     t.yil = yil; }
    return t;
           }




     struct Ogrenci {
      char ad[21];
      char soyad[21];
      char no[11];
      char bolum[41];
      struct Tarih kayit_tarihi;
           };

void Ogrenci_atama_yap(struct Ogrenci *ogr, const char adi[ ],const char soyadi[ ], const char numarasi[ ], const char bolumu[ ], struct Tarih kayit_oldugu_tarih) {
strcpy(ogr->ad, adi);
strcpy(ogr->soyad, soyadi);
strcpy(ogr->no, numarasi);
 strcpy(ogr->bolum, bolumu);
ogr->kayit_tarihi = kayit_oldugu_tarih;
}
int main() {
struct Ogrenci ogr_liste[20];
Ogrenci_atama_yap(&ogr_liste[0], "A", "A", "150202177", "BilgisayarMuhendisligi", Tarih_olustur(1, 2, 2015));
Ogrenci_atama_yap(&ogr_liste[1], "B", "B", "150202178", "BilgisayarMuhendisligi", Tarih_olustur(1, 2, 2015));
Ogrenci_atama_yap(&ogr_liste[2], "C", "C", "150202179", "BilgisayarMuhendisligi", Tarih_olustur(2, 9, 2014));

int kayitli_ogr_sayisi = 3;

for (int i = 0 ; i < kayitli_ogr_sayisi ; i++) {
printf("adi soyad: %s %s\n", ogr_liste[i].ad, ogr_liste[i].soyad);
printf("no: %s\n", ogr_liste[i].no);
printf("bolum: %s\n", ogr_liste[i].bolum);
printf("kayit tarihi: %02d.%02d.%d\n\n\n", ogr_liste[i].kayit_tarihi.gun,ogr_liste[i].kayit_tarihi.ay, ogr_liste[i].kayit_tarihi.yil);
}
return 0;
}







