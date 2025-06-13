#include <stdio.h>
#include <stdlib.h>


/*
Fibonacci Serisi: 

1,1,2,3,5,8,13,21.......................


*/



int main() {
	
	int ilksayi = 1;
	int ikincisayi = 1;
	int i;
	
	printf("%d\n%d\n", ilksayi, ikincisayi);
	
	for(i = 0; i < 32; i++) {
		
		
		int temp = ikincisayi;
		
		ikincisayi += ilksayi;
		
		ilksayi = temp;
		
		printf("%d\n", ikincisayi);
		
		
		
	}
	
	
	return 0;
}
