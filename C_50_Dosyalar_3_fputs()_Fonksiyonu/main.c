#include <stdio.h>
#include <stdlib.h>

int main () {
	
	FILE *filep;
	char text[256];
	filep = fopen("yaz.txt","a");
	
	if (filep == NULL) {
		printf("Dosya Olusmadi");
		
	}
	else {
		printf("Bir sey yazin: ");
		fgets(text, 256, stdin);
		fputs(text, filep);
		
		printf("Dosyaya yazildi");
		fclose(filep);
			
	}	
	
	
		
	
	return 0;

}
