#include <stdio.h>

/*	
	Fonksiyon Tan�mlama
	
	
	DonusTipi fonsiyonadi (Parametreler) {
		///////  Fonksiyon Blo�u
		
		
		yap�lacak i�lemler
		
		
	}
*/

void hatayibas(int hata, int hata2) {
	
	printf("Hata kodu %d", hata);
		
}

int main() {
	
	int sayi;
	
	printf("Lutfen negatif olmayan bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi < 0) {
		
		hatayibas(404, 410);
		
		
	}
	else {
		
		printf("Tebrikler");              
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
