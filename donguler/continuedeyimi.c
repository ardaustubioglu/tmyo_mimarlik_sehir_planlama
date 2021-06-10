#include <stdio.h>
// continue komutu
main()
{
	long i, sayi;
	int kotu_deger = 7;
	printf("Lutfen 1den itibaren yazdirmak istediginiz sayiyi giriniz:\n");
	scanf("%d",&sayi);
	for(i=0; i<=sayi; i=i+1)
	{
		if(i==kotu_deger)
		{
			//break;
			continue;
		}
		printf("%d \n",i);
	}	
}
