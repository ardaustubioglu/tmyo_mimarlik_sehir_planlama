#include <stdio.h>

main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&sayi);
	if(sayi % 2 == 0) //çift olma þartý
	{
		printf("%d bir cift sayidir",sayi);
	}
	else
	{
		printf("%d bir tek sayidir",sayi);
	}
}
