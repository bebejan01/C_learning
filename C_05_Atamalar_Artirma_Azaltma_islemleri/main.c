#include <stdio.h>

int main()

{
	/*
	
	Atamalar, Artirma, Azaltma Iþlemleri
	
	degiþken(variable) = ifade(expression)
	
	int x = 15;
	int y = 14;
	
	x = y; y'nin degerini x'e atiyor.
	y = x; x'in degerini y'ye atiyor.
	Örnek:
	int x = 6;
	int y = 7;
	x = y; (y'nin degeri x'e ataniyor. x = 7, y = 7)
	y = x+1 (x+1 hesaplaniyor(8) ve y'ye atiliyor. x = 7, y = 8)
	
	
	x = x+1;
	Atama durumunda ilk baþta sag taraftaki kisim hesaplanir.
	Sonra atama yapilir.
	
	x+1 = 2; (Bu tur þeyler C de gecerli degildir. Sol taraftaki deger saf bir degisken olmalý. x gibi y gibi)
	
	
	Artirma, Azaltma Iþlemleri
	
	i = i+1;
	Bunun esiti ayný zamanda i += 1 (i = i+1 ile ayni þey)
	(Degisken iþlem = ifade)
	C'de kolay bir yöntem var.
	Ustteki islem i'yi bir artirir.
	i'yi artirmak icin C'de i++ ve ++i gibi seyler bulunuyor.
	
	postfix : i++;
	prefix  : ++i;
	Arasindaki fark : 
	int i = 4;
	printf("%d", i++);
	Ekrana 4 degerini yazdirir.
	Cunku bu postfix halinde (i++) i'nin artirmadan onceki degerini (4) kullaniyor. Bir sonraki satirda artiriyor.
	
	printf("%d",++i);
	Ekrana 5 degerini yazdirir.
	Cunku bu prefix halinde (++i) i'nin artmýs degerini kullaniyor(5) bir sonraki satirda artiriyor.
	
	i-- ve --i ayni sekilde calisiyor.
	
	(degisken islem = ifade) biraz acarsak,
	
	i = i % a;
	Bu forma sokmaya calýsalým. i %= a;
	Örnek: i = i * (a+1); Esiti -----> i *= a+1;
	
	Ýçiçe Atamalar
	
	i = j = k = 0;
	Bu sekilde bir atama varsa en sagdan baslayarak k'ya 0 atiyor. Yani k=0. Daha sonra j'ye k'nin degerini atiyor(0).
	j = 0. Daha sonra  i'ye j'nin degerini atiyor. i = 0 oldu. Sonuc olarak en sagdan baslayarak yapilan atamalar sonucunda,
	
	i = 0;
	j = 0;
	k = 0;
	Bu sekilde atamalarda en sagdan baslayarak islemler yapilir.(Ancak programcilar bunun cok daha karmasik versiyonlarini
	tercih etmezler.)
	
	*/
	
	int x = 5;
	int y = 7;
	int a = 2;
	
	x = y;
	y = x + a + 1; 
	
	printf("x:%d\ny:%d\na:%d\n",x,y,a);
	
	x = 4;
	y = 5;
	a = 6;
	printf("x:%d y:%d a:%d\n", --x,++y,a++);
	
	printf("x:%d y:%d a:%d\n", x,y,a);
	
	printf("x:%d y:%d a:%d\n", x--,--y,a--);
	
	printf("x:%d y:%d a:%d\n", x,y,a);
	
	
	
	
	
	
	/*
	x = 2, a = 6
	x = x + (a+1);
	
	*/
	
	x += a+1;
	
	printf("%d\n", x);
	
	
	
	
	
	x = y = a + 4;
	printf("x:%d y:%d a:%d\n", x,y,a);
	
	
	return 0;
}
















