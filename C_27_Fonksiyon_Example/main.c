#include <stdio.h>

/*
Asal sayi mi Değil mi?

Asal sayi, 2'den kendisine kadar olan sayılardan hiçbirine tam bölünmeyen sayılardır.
*/

int asal_mi(int sayi) {
    if (sayi < 2) return 0; // 0 ve 1 asal değildir
	int i;
    for (i = 2; i < sayi; i++) {
        if (sayi % i == 0) {
            return 0; // asal değil
        }
    }
    return 1; // asal
}

int main() {
    int n;

    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (asal_mi(n) == 0) {
        printf("Bu sayi asal sayi degildir.\n");
    } else {
        printf("Bu sayi asal sayidir.\n");
    }

    return 0;
}

