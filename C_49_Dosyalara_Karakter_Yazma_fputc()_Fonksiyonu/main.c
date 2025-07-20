#include <stdio.h>
#include <string.h>

int main() {
	char veri[25] = "Yazilim Bilimi";
	int uzunluk = strlen(veri);
	int i;	
	
	FILE *filep = fopen("yazilimbilimi.txt","w");
	
	if(filep == NULL) {
		
		printf("Dosya olusturulamadi");
		
	}
	
	else { 
		for (i = 0; i < uzunluk; i++) {
			
			fputc(veri[i],filep);
			printf("Yazilim Karakter %c\n", veri[i]);
			
		}
		
		printf("Dosya Basariyla Yazdirildi.");
		fclose(filep);
		
		
		
	}
	

	
	
	
	
	
	
	
	
	
	return 0;
}

