#include <stdio.h>

/*
bool veritipi- true(do�ru) ya da false(yanl��)
*/

int main() {
	
	int note;
	
	printf("Notunuzu girin: ");
	scanf("%d", &note);
	
	if (note > 60) {
		// yap�lacak i�lemler yaz�l�yor buraya
		
		printf("Dersten gectiniz.");
	}
	
	else {
		printf("Dersten kaldiniz.");
	}
	
	
	
	
	
	
	return 0;
}
