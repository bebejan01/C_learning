#include <stdio.h>

int main() {
	
	int vize1, vize2, final;
	float dersort;
	
	float ortalama;
	
	printf("1. vize notunuzu giriniz: ");
	scanf("%d", &vize1);
	
	printf("2. vize notunuzu giriniz: ");
	scanf("%d", &vize2);
	
	
	printf("Final vize notunuzu giriniz: ");
	scanf("%d", &final);
	
	printf("Universite ortalamasi kac; ");
	scanf("%f", &ortalama);
	
	
	dersort = (vize1 + vize2 + final) / 3.0;
	
	if(dersort > 60) {
		
		printf("Dersten Gectiniz.");
		
	}
	
	else if(dersort > 50) {
		
		printf("Dersten Bute kaldiniz.\n");
		
		if (ortalama < 2.5) {
			printf("Butu gecsen bile dersi seneye al, cunku ortalaman dusuk.\n");
			
		}
		
		
		
	}
	
	else {
		
		printf("Kaldiniz.");
	}
	
	
	
	
	
	
	
	
	return 0;
}
