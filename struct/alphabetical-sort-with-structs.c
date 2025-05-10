#include <stdio.h>
#include <string.h>

struct Ogrenci {
    char isim[50];
    int numara;
    float not_ortalamasi;
};

 struct Ogrenci_Listesi {
    struct Ogrenci ogrenciler[10];
};

int main() {
    struct Ogrenci_Listesi liste;
    struct Ogrenci gecici;
    int i, j;

    // Öğrenci bilgileri alınır
    for (i = 0; i < 10; i++) {
        printf("ogrenci %d adi: ", i+1);
        scanf("%s", liste.ogrenciler[i].isim);
        printf("ogrenci %d numarasi: ", i+1);
        scanf("%d", &liste.ogrenciler[i].numara);
        printf("ogrenci %d not ortalamasi: ", i+1);
        scanf("%f", &liste.ogrenciler[i].not_ortalamasi);
    }

    // Öğrenci isimlerini alfabetik olarak sıralar
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(liste.ogrenciler[i].isim, liste.ogrenciler[j].isim) > 0) {
                gecici = liste.ogrenciler[i];
                liste.ogrenciler[i] = liste.ogrenciler[j];
                liste.ogrenciler[j] = gecici;
            }
        }
    }

    // Sıralanmış öğrenci isimlerini yazdırır
    printf("\nOgrenci isimleri (alfabetik sirayla):\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", liste.ogrenciler[i].isim);
    }

    return 0;
}


