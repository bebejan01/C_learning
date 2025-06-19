#include <stdio.h>

int max(int *a, int uzunluk) {
	int maks = a[0];
	
	int i;
	
	for (i = 1; i < uzunluk; i++) {
		if (a[i] > maks) {
			
			maks = a[i];
		}
	}
	
	return maks;
}


int main() {
	
	int sayilar[5] = {1,2,3,4,5};
	
	int maks = max(sayilar, 5);
	
	printf("Sayilar Dizisinin En Buyuk elemani %d dir.", maks);
	
/*	printf("%u\n", p);
	
	printf("%u", p+1);	
	printf("%u\n", p+1);
	printf("%u\n", p+2);
	printf("%u\n", p+3);	*/
	
/*	printf("%d\n", *p);
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));
	printf("%d\n", *(p+3));
	printf("%d\n", *(p+4)); */
	
	
//	*(p+1)  ------------> p[1]


/*	printf("%d\n", p[0]);
	printf("%d\n", p[1]);
	printf("%d\n", p[2]);
	printf("%d\n", p[3]);
	printf("%d\n", p[4]);  */
	
	
	
	
	
	
	
	return 0;
}
