#include <stdio.h>
// break komutu
main()
{
	long i, sayi;
	int limit = 27;
	printf("Lutfen 1den itibaren yazdirmak istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	for(i=0; i<=sayi; i=i+1)
	{
		printf("%d \n",i);
		if(i>=limit)
		{
			break;	
		}
			
	}	
}
