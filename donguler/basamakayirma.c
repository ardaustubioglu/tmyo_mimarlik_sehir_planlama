// girilen N basamakl� say�n�n basamak degerlerini ekrana yazd�ran uygulama

#include <stdio.h>
main()
{
	int sayi, kalan;
	printf("Lutfen bir sayi degeri giriniz:\n");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		kalan = sayi % 10;
		printf("%d ",kalan);
		sayi = (int)sayi / 10;
	}
}
