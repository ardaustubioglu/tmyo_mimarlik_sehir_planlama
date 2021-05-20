#include <stdio.h>

main()
{
	int s1, s2;
	printf("Lutfen 2 sayi giriniz:\n");
	scanf("%d %d",&s1,&s2);
	if(s1>s2)
	{
		printf("Girilen sayilarin en buyugu = %d",s1);
	}
	else
	{
		printf("Girilen sayilarin en buyugu = %d",s2);
	}
}
