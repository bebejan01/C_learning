#include <stdio.h>

int main() {
	
	
	/*
	döngü baþlatma
	while(koþul) {
	
	artýrma
	}
	
	
	
	int i;
	
	i = 0;
	
	while(i<10) {
	
	printf("%d Merhaba yazilimcilar\t\n", i);
	
	
	
	i++;
	}	
	
	printf("%d - dongu bitti", i);
	
	*/
	
	
	
	
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz: ");
	scanf("%d", &n);
	
	while(n != 0) {
		printf("%d\n", n);
		fact = fact *n;
		
		
		
		n--;
	}
	printf("%d", fact);
	
	return 0;
}
