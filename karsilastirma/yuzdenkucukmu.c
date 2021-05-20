#include <stdio.h>

main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&sayi);
	// klavyeden girilen sayi 100'den büyük mü?
	if(sayi<100)
	{
		printf("Isleminize devam edebilirsiniz...");
	}
	else
	{
		printf("Isleminize devam edebilmek icin 100den kucuk bir sayi giriniz...");
	}
}
