// Kullanýcýnýn negatif bir deðer girmesine kadar girilen sayýlarýn karesini alan uygulama

#include <stdio.h>
main()
{
	int sayi, kare;
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&sayi);
	while(sayi>=0)
	{
		kare = sayi * sayi;
		printf("%d sayisinin karesi = %d\n\n\n",sayi,kare);	
		
		printf("Lutfen bir sayi giriniz:\n");
		scanf("%d",&sayi);		
	}	
}
