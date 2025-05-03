#include <stdio.h>

int main() {
	
	/*
		x + y -----> x ile y'yi toplar.
		x - y -----> x'den y'yi cikarir
		x * y -----> x ile y'yi carpar.
		x / y -----> x ile y'yi boler.
		
		x % y -----> x'in y ile bölümünden kalaný verir.
		
		+x -----> x sayisini arti ile carpar(sonuc degismez yani)
		-x -----> x sayisini - ile carpar (x sayisi eksi ise arti yapar, x sayisi arti ise eksi yapar)
		
	*/
	
	int x1 = 1;
	int x2 = -1;
	
	printf("%.1f\n", 12.1+9.2);
	printf("%d\n", 12+9);
	printf("%d\n", 12-9);
	printf("%d\n", 12*9);
	printf("%d\n", 12/9);
	printf("%d\n", 12 % 9);
	
	printf("%d\n", -x1);
	printf("%d\n", -x2);
	
	
	
	
	
	return 0;
}

