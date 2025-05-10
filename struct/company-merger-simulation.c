#include <stdio.h>
#include <string.h>

 struct sirket{

 char isim[20];
  int sermaye;
  int pazarpayi;
 };

     void birlestir(struct sirket *t1,struct sirket *t2,struct sirket *temp){

       if(t1->sermaye > t2->sermaye){

       strcpy(temp->isim,t1->isim);

       }

       else
     {
         strcpy(temp->isim,t2->isim);
     }

       temp->sermaye=t1->sermaye + t2->sermaye;
       temp->pazarpayi=t1->pazarpayi + t2->pazarpayi;

     }




    int main (){

        struct sirket t1,t2,temp;
        printf("\nBirinci sirketin isim,sermaye ve pazar payini giriniz:");
        char al[100];
        fgets(al,100,stdin);
        sscanf(al,"%s %d %d",t1.isim,&t1.sermaye,&t1.pazarpayi);
        printf("\nIkinci sirketin isim,sermaye ve pazar payini giriniz:");
        fgets(al,100,stdin);
        sscanf(al,"%s %d %d",t2.isim,&t2.sermaye,&t2.pazarpayi);
         birlestir(&t1,&t2,&temp);
         printf("Birlesiminden ortaya cikan sirketin ismi,sermayesi ve pazar payi: %s,%d,%d ",temp.isim,temp.sermaye,temp.pazarpayi);
    return 0;

    }
