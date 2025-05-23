#include <stdio.h>

/*
bool veritipi- true(doðru) ya da false(yanlýþ)
*/

int main() {
	
	int note;
	
	printf("Notunuzu girin: ");
	scanf("%d", &note);
	
	if (note > 60) {
		// yapýlacak iþlemler yazýlýyor buraya
		
		printf("Dersten gectiniz.");
	}
	
	else {
		printf("Dersten kaldiniz.");
	}
	
	
	
	
	
	
	return 0;
}
