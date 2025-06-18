#include <stdio.h>
#include <string.h>

/* int uzunlukdon(char name[]) {
	
	int uzunluk = 0;
	
	int i;
	
	for(i = 0; name[i] != '\0'; i++) {
		
		uzunluk++;
	}
	
	
	
	
	return uzunluk;
	
} */

void terscevir(char dizi[]) {
	int i, uzunluk, gecici;
	
	uzunluk = strlen(dizi);
	
	for (i = 0; i < uzunluk/2; i++) {
		gecici = dizi[i];
		dizi[i] = dizi[uzunluk - 1 - i];
		
		dizi[uzunluk - 1 - i] = gecici;
		
	}
	
	
	
	
	
	
}


int main () {
	
/*	char isim[] = "Mustafa";
	
	printf("%d", uzunlukdon(isim)); */
	
	char text[200];
	
	scanf("%s", text);
	
	terscevir(text);
	
	printf("%s", text);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
