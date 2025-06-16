#include <stdio.h>

/*	
	Fonksiyon Tanýmlama
	
	
	DonusTipi fonsiyonadi (Parametreler) {
		///////  Fonksiyon Bloðu
		
		
		yapýlacak iþlemler
		
		
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
