#include <stdio.h>
#include <string.h>

    struct katalog {

      int sayfa;
      int fiyat;
      char yazar[20];
      char tur[20];

    };



   int main (){

       struct katalog k1[100];
       int ksayisi;
       printf("Lutfen kitap sayisini giriniz:\n");
       scanf("%d",&ksayisi);

       for(int i=0 ; i<ksayisi ; i++){

        printf(" %d'ninci kitabin bilgilerini giriniz:",i+1);
        printf("\nsayfa:");
        scanf("%d",&k1[i].sayfa);
        printf("\nfiyat:");
        scanf("%d",&k1[i].fiyat);
         printf("\nyazar:");
        scanf("%s",&k1[i].yazar);
        printf("\ntur:");
        scanf("%s",&k1[i].tur);


     }


   for(int i=0 ; i<ksayisi ; i++){

        printf(" %d'ninci kitabin bilgileri:",i+1);
        printf("\nsayfa:%d",k1[i].sayfa);
        printf("\nfiyat:%d",k1[i].fiyat);
        printf("\nyazar:%s",k1[i].yazar);
        printf("\ntur:%s",k1[i].tur);

     }



   return 0 ;

   }
