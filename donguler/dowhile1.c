// do ... while

#include <stdio.h>

main()
{
	int sayi;
	/*
	do
	{
		printf("Lutfen bir sayi giriniz:\n");
		scanf("%d",&sayi);
		printf("%d x 2 = %d\n", sayi, sayi*2);
	} while(sayi>0);
	*/
	
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		printf("%d x 2 = %d\n", sayi, sayi*2);
		printf("Lutfen bir sayi giriniz:\n");
		scanf("%d",&sayi);		
	}
	
	printf("Uygulama sonlanmistir");
}
