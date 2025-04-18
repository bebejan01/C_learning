#include <stdio.h>

int main()

{


	
	// Tek yorum sat�r�. Tek sat�rl� yorumlar i�in Compiler(Derleyici yorumlar aras�na yazd���m�z �eyleri g�rmezden gelir.
	
	/* 
	
			�oklu yorum sat�r�.
			Buran�n aras�n� diledi�iniz gibi yorumlarla doldurabiliriz.
			
	/*
	
	/*
	De�i�kenler
	Temel de�i�kenlerimiz char, int, float, double, short, long
	
	char veritipi-1 byte (8 bit) 0 dan 255(2^8) e kaar de�er alabilir. Her bir de�er ASCII tablosundaki bir de�ere 
	e�de�erdir.	
	
	int veritipi-4 byte (32 bit) -2^16 dan 2^16 kadar de�er al�r. 2, 32, 45 gibi de�erler int de�erleridir.(tamsay�)
	
	short veritipi(short int) - 2 byte (16 bit) -2^8 den 2^8 kadar de�er al�r. int ile ayn�d�r. Sadece alaca��
	de�er aral��� farkl�d�r. Yine 2, 32, 132 gibi say�lar� shortla ifade edebiliriz.
	
	Long veritipi (Long int) -8 byte (64 bit) -2^32 den 2^32 kadar de�er al�r. int ile ayn�d�r. sadece alaca��
	de�er aral��� farkl�d�r. �ok b�y�k say�lar i�in kullan�labilir. 1231231232112,2324324234 gibi say�lar i�in kullan�labilir.
	
	Float veritipi kesirli say�lar� tutmak i�in kullan�l�r. Byte'� i�letim sistemie g�re de�i�ebilir. 2.13, 3.4 gibi
	de�erler i�in kullan�labilir.
	
	Double veritipi ayn� float gibi kesirli say�lar  i�in kullan�l�r. Ancak floattan daha kapsaml�d�r. Byte'� i�letim
	sistemine g�re de�i�ebilir. 2.123123213123, 4.213123213214124 gibi de�erler i�in idealdir.
	
	Ancak programc�lar genelde sadece cahr, int, float ve double kullan�rlar. Veri tipleri hakk�nda �ok daha fazla �ey 
	��renmek i�in internetten ara�t�rabilirsiniz.
	*/
	/*
	De�i�kenn tan�mlama
	Veritipi De�i�kenad�;
	*/
	/*
	
	Format belirleyiciler:
	%d -----> int de�erler i�in printf de format belirleyici olarak kullan�l�r.
	�rnek:
	int x = 5;
	printf("%d", x); -----> eekrana 5 de�erini basar.
	
	%f -----> float ve double i�in format belirleyici olarak kullan�l�r.
	float f= 3.1
	double d= 4.21 
	printf("%f %f",f,d); -----> ekrana 3.1, 4.21 �eklinde ��kt� basar. De�i�kenleri verme s�ras�yla.
	
	%c -----> karakterler i�in kullan�l�r.
	char c1 = 'c';
	printf("%c", c1) -----> ekrana c basar.
	printf("%d", c1) -----> ekrana ASCII tablosundaki c'nin de�erini basar.
	
	%s -----> karakter dizileri i�in kullan�l�r. ("Cprogramlama"]
	
	printf("%s", "Cprogramlama") -----> ekrana Cprogramlama bassar.
	*/
	
	return 0;
}
