#include <stdio.h>

main()
{
	int sayi;
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&sayi);
	if(sayi % 2 == 0) //�ift olma �art�
	{
		printf("%d bir cift sayidir",sayi);
	}
	else
	{
		printf("%d bir tek sayidir",sayi);
	}
}
