#include <stdio.h>

/*
Bool Veritipi (true ya da false)

Mantýksal ifadeler doðru ise True
Mantýksal ifadeler yanlýþ ise False
ayný zamanda bütün 0 olmayan sayýlar (1, 132, 2500 vs.) True deðer sayýlar.
0 ise False deðerdir.

Mantýksal Operatörler

<   -----> küçük müdür. a < b þeklinde
>   -----> büyük müdür. a > b þeklinde
<=  -----> küçük ya da eþit midir. a <= b þeklinde
>=  -----> büyük ya da eþit midir. a >= b þeklinde
==  -----> eþit midir. a == b þeklinde
!=  -----> eþit deðil midir. a != b þeklinde

Mantýksal Baðlaçlar
Bir çok mantýksal ifadeyi iþlemi baðlayan araçlardýr.

&&  -----> mantýksal and ("ve") baðlacý. True && True && False gibi baðlanabilir. && olduðu cümlenin True
olmasý için bütün ifadelerin True olmasý gerekir. Eðer bu cümlenin içinde bir tane bile False varsa o mantýksal
cümle False(yanlýþ) olur.

//  -----> mantýksal or ("ya da") baðlacý. True // True // False gibi baðlanabilir. // olduðu cümlenin
True olmasý için en az bir ifadenin True olmasý gerekir. Eðer mantýksal or ( // ) ile baðlanmýþ cümlenin
içinde bütün ifadeler False ise o mantýksal cümle False(yanlýþ) olur.

!   -----> Mantýksal not ("deðil") operatörü. Doðru olan (True) olan mantýksal ifadeyi yanlýþ (False) yapar.
yanlýþ olan (False) olan mantýksal ifadeyi doðru (True) yapar.


Þartlý Cümleler

a = x > y ? x: y;    eðer x büyük y ise bu satýrýn hepsinin eþiti x oluyor. Deðilse hepsinin eþiti y oluyor.

*/

int main() {
	
	/*
	
	Bir kaç alýþtýrma
	
	int a = 40;
	int b = 41;
	
	a > b;
	a < b;
	a >= b;
	a <= b;
	a != b;
	a == b;
	*/
	
	/*
	int a = 40;
	int b = 50;
	int c = 60;
	int d = 70;
	
	a > c && c <= d && (a > b // b < c)
	
	!(a >= d)
	
	*/
	
	int a,b = 20, c = 30;
	
	a = b < c ? b : c;
	printf("%d", a);
	
	
	
	
	
	
	return 0;
}
