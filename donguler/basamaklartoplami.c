// girilen N basamaklý sayýnýn basamak degerlerini ekrana yazdýran uygulama

#include <stdio.h>
main()
{
	int sayi, kalan, toplam=0;
	printf("Lutfen bir sayi degeri giriniz:\n");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		kalan = sayi % 10;
		toplam = toplam + kalan;
		sayi = (int)sayi / 10;
	}
	printf("%d ",toplam);
}
