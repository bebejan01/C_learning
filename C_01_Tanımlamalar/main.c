#include <stdio.h>

int main()

{


	
	// Tek yorum satýrý. Tek satýrlý yorumlar için Compiler(Derleyici yorumlar arasýna yazdýðýmýz þeyleri görmezden gelir.
	
	/* 
	
			Çoklu yorum satýrý.
			Buranýn arasýný dilediðiniz gibi yorumlarla doldurabiliriz.
			
	/*
	
	/*
	Deðiþkenler
	Temel deðiþkenlerimiz char, int, float, double, short, long
	
	char veritipi-1 byte (8 bit) 0 dan 255(2^8) e kaar deðer alabilir. Her bir deðer ASCII tablosundaki bir deðere 
	eþdeðerdir.	
	
	int veritipi-4 byte (32 bit) -2^16 dan 2^16 kadar deðer alýr. 2, 32, 45 gibi deðerler int deðerleridir.(tamsayý)
	
	short veritipi(short int) - 2 byte (16 bit) -2^8 den 2^8 kadar deðer alýr. int ile aynýdýr. Sadece alacaðý
	deðer aralýðý farklýdýr. Yine 2, 32, 132 gibi sayýlarý shortla ifade edebiliriz.
	
	Long veritipi (Long int) -8 byte (64 bit) -2^32 den 2^32 kadar deðer alýr. int ile aynýdýr. sadece alacaðý
	deðer aralýðý farklýdýr. Çok büyük sayýlar için kullanýlabilir. 1231231232112,2324324234 gibi sayýlar için kullanýlabilir.
	
	Float veritipi kesirli sayýlarý tutmak için kullanýlýr. Byte'ý iþletim sistemie göre deðiþebilir. 2.13, 3.4 gibi
	deðerler için kullanýlabilir.
	
	Double veritipi ayný float gibi kesirli sayýlar  için kullanýlýr. Ancak floattan daha kapsamlýdýr. Byte'ý iþletim
	sistemine göre deðiþebilir. 2.123123213123, 4.213123213214124 gibi deðerler için idealdir.
	
	Ancak programcýlar genelde sadece cahr, int, float ve double kullanýrlar. Veri tipleri hakkýnda çok daha fazla þey 
	öðrenmek için internetten araþtýrabilirsiniz.
	*/
	/*
	Deðiþkenn tanýmlama
	Veritipi Deðiþkenadý;
	*/
	/*
	
	Format belirleyiciler:
	%d -----> int deðerler için printf de format belirleyici olarak kullanýlýr.
	Örnek:
	int x = 5;
	printf("%d", x); -----> eekrana 5 deðerini basar.
	
	%f -----> float ve double için format belirleyici olarak kullanýlýr.
	float f= 3.1
	double d= 4.21 
	printf("%f %f",f,d); -----> ekrana 3.1, 4.21 þeklinde çýktý basar. Deðiþkenleri verme sýrasýyla.
	
	%c -----> karakterler için kullanýlýr.
	char c1 = 'c';
	printf("%c", c1) -----> ekrana c basar.
	printf("%d", c1) -----> ekrana ASCII tablosundaki c'nin deðerini basar.
	
	%s -----> karakter dizileri için kullanýlýr. ("Cprogramlama"]
	
	printf("%s", "Cprogramlama") -----> ekrana Cprogramlama bassar.
	*/
	
	return 0;
}
