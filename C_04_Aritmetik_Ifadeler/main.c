#include <stdio.h>

int main() {


	/*
	-x, x+y*z, (x/7)*y, (a % b) - (x*a +1), 3 + 4 * 7 bu gibi ifadeler birer aritmetik ifadelerdir.
	
	I�lem sirasi: 
	tekli operatorler : (+) (-) (-x,+x) 1. oncelik bunlar. kendi aralar�nda bir denklemde sagdan sola.
	ikili operatorler : *, /, % 2. oncelik, kendi aralarinda soldan saga.
	ikili operatorler : +, - 3. oncelik, kendi aralarinda soldan saga.
	
	parantez icleri her zaman ilk planda yapilir.
	Matematikle ayn�!
	*/
	
	
	
	printf("%d\n", (2+3)%4);
	
	
	
	
	
	return 0;
	
}

