#include <stdio.h>

/*
Bool Veritipi (true ya da false)

Mant�ksal ifadeler do�ru ise True
Mant�ksal ifadeler yanl�� ise False
ayn� zamanda b�t�n 0 olmayan say�lar (1, 132, 2500 vs.) True de�er say�lar.
0 ise False de�erdir.

Mant�ksal Operat�rler

<   -----> k���k m�d�r. a < b �eklinde
>   -----> b�y�k m�d�r. a > b �eklinde
<=  -----> k���k ya da e�it midir. a <= b �eklinde
>=  -----> b�y�k ya da e�it midir. a >= b �eklinde
==  -----> e�it midir. a == b �eklinde
!=  -----> e�it de�il midir. a != b �eklinde

Mant�ksal Ba�la�lar
Bir �ok mant�ksal ifadeyi i�lemi ba�layan ara�lard�r.

&&  -----> mant�ksal and ("ve") ba�lac�. True && True && False gibi ba�lanabilir. && oldu�u c�mlenin True
olmas� i�in b�t�n ifadelerin True olmas� gerekir. E�er bu c�mlenin i�inde bir tane bile False varsa o mant�ksal
c�mle False(yanl��) olur.

//  -----> mant�ksal or ("ya da") ba�lac�. True // True // False gibi ba�lanabilir. // oldu�u c�mlenin
True olmas� i�in en az bir ifadenin True olmas� gerekir. E�er mant�ksal or ( // ) ile ba�lanm�� c�mlenin
i�inde b�t�n ifadeler False ise o mant�ksal c�mle False(yanl��) olur.

!   -----> Mant�ksal not ("de�il") operat�r�. Do�ru olan (True) olan mant�ksal ifadeyi yanl�� (False) yapar.
yanl�� olan (False) olan mant�ksal ifadeyi do�ru (True) yapar.


�artl� C�mleler

a = x > y ? x: y;    e�er x b�y�k y ise bu sat�r�n hepsinin e�iti x oluyor. De�ilse hepsinin e�iti y oluyor.

*/

int main() {
	
	/*
	
	Bir ka� al��t�rma
	
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
