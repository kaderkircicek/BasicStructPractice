#include <stdio.h>
#include <string.h>


struct sube {

    char isim[20];
    int kontenjan;
    int ogrenciSayisi;
    };


    void subeUret(struct sube *ders,struct sube *ek){

           ek->ogrenciSayisi=ders->ogrenciSayisi-ders->kontenjan ;
           strcpy(ek->isim,"EK");
           ek->kontenjan=ders->kontenjan;
           ders->ogrenciSayisi=ders->ogrenciSayisi-ek->ogrenciSayisi;
        }


    int main ()
    {
        struct sube ders ;
        printf("Subenin isim,kontenjan ve ogrenci sayisini giriniz:\n");
        scanf("%s %d %d",&ders.isim,&ders.kontenjan,&ders.ogrenciSayisi);

        if(ders.ogrenciSayisi>ders.kontenjan)
        {    struct sube ek;
            subeUret(&ders,&ek);
           printf("Bolundukten sonraki hali : %s,%d %d",ders.isim,ders.kontenjan,ders.ogrenciSayisi);
            printf("\nYeni sube bilgiler : %s,%d %d",ek.isim,ek.kontenjan,ek.ogrenciSayisi);
        }


    }