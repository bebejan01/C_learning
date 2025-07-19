#include <stdio.h>

int main() {
	
/*	FILE *filep = fopen("yazilimbilimi.txt","w");
	
	if (filep == NULL) {
		printf("Dosya olusturulamadi");
		
	}
	
	else {
		printf("Dosya olusturuldu");
		
	} */
	
	
	
		
	FILE *filep = fopen("yazilimbilimi.txt","r");
	
	if (filep == NULL) {
		printf("Oyle bir dosya yok.");
		
	}
	
	else {
		printf("Oyle bir dosya var.");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
