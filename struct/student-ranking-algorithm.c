#include <stdio.h>
#include <string.h>


struct ogrenci{

    int no;
    char adsoyad[50];
    float ortalama;
    int akts;
    int yil;

    };

   int BasariliOgrenciBul(struct ogrenci ogrenci1, struct ogrenci ogrenci2) {

       if(ogrenci1.ortalama>ogrenci2.ortalama)
        return 1 ;
       if(ogrenci1.ortalama==ogrenci2.ortalama && ogrenci1.akts>ogrenci2.akts)
        return 1;
       if(ogrenci1.ortalama==ogrenci2.ortalama && ogrenci1.akts==ogrenci2.akts && ogrenci1.yil<ogrenci2.yil)
        return 1;
       if(ogrenci1.ortalama==ogrenci2.ortalama && ogrenci1.akts==ogrenci2.akts && ogrenci1.yil==ogrenci2.yil)
         return rand()%2 ;

         return 0;
   }






 int main(){

  struct ogrenci ogrenci1,ogrenci2;
  int deger;

  printf("Birinci ogrencinin bilgilerini giriniz:\n");
  printf("Ogrenci numarasi:");
  scanf("%d",&ogrenci1.no);
  printf("\nOgrenci ortalamasi:");
  scanf("%f",&ogrenci1.ortalama);
  printf("\nOgrenci akts:");
  scanf("%d",&ogrenci1.akts);
  printf("\nOgrenci giris yili:");
  scanf("%d",&ogrenci1.yil);
  getchar();
   printf("Ogrenci adi-soyadi:");
  fgets(ogrenci1.adsoyad,50,stdin);


  printf("\n\nIkinci ogrencinin bilgilerini giriniz:\n");
  printf("Ogrenci numarasi:");
  scanf("%d",&ogrenci2.no);
  printf("\nOgrenci ortalamasi:");
  scanf("%f",&ogrenci2.ortalama);
  printf("\nOgrenci akts:");
  scanf("%d",&ogrenci2.akts);
  printf("\nOgrenci giris yili:");
  scanf("%d",&ogrenci2.yil);
  getchar();
  printf("Ogrenci adi-soyadi: ");
  fgets(ogrenci2.adsoyad,50,stdin);


  deger=BasariliOgrenciBul(ogrenci1,ogrenci2);

  printf("\nDaha basarili ogrenci:\n");

  if(deger==1){
    printf("%d\n",ogrenci1.no);
    printf("%s\n",ogrenci1.adsoyad);
  }
  else{
     printf("%d\n",ogrenci2.no);
     printf("%s", ogrenci2.adsoyad);

  }
 return 0;

 }