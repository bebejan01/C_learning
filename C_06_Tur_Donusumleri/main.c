#include <stdio.h>


int main() {
	
	/* 
	
	Tip D�n���mleri
	Otomatik D�n���mler
	�rne�in bir aritmetik ifadede b�t�n tipler ayn� de�il. Mesela 3.2/2 dedi�imiz zaman float ve
	int beraber oluyor.
	Burda sonu� ne olacakt�r. 1.6 ��nk� otomatik bir d�n���m yap�l�yor. (2 say�s� floata �evrilip 2.0
	oluyor asl�nda.)
	
	
	Otomatik D�n���m �izelgesi :
	char
	short -----> int -----> float -----> double -----> long double
	
	Mesela int ve double beraberse herkes double'a otomatik olarak �evrilir.(Sa�a do�ru �ncelik art�yor.)
	
	
	Manuel D�n���mler
	Otomatik d�n���mlerin olmad��� yerlerde kendimiz yapabiliriz.
	
	3.2 say�s�n� int yapmak istersek -----> (int) 3.2 -----> 3 sonucunu verir. (Kesirli k�sm� atar.)
	
	*/
	
	int x = 3;
	float y = 0.1;
	printf("%f\n", x/y);
	
	printf("%f\n", 2*4.2 + 4%2);
	printf("%f\n", 12.5/2);
	printf("%d\n", (int)3.2);
	printf("%f\n", (float)3);
	
	
	
	return 0;
	
}
