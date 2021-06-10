#include <stdio.h>

main()
{
	int i, sayi;
	printf("Lutfen 1den itibaren yazdirmak istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	
	for(i=0; i<=sayi; i=i+5)
	{
		printf("%d \n",i);	
			
	}	
}
