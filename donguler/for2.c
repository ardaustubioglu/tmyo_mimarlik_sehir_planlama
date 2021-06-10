#include <stdio.h>

main()
{
	int i, basla, bitis, artim;
	printf("Lutfen yazdirmak istediginiz sayi araligini ve artim miktarini giriniz:\n");
	scanf("%d %d %d",&basla,&bitis,&artim);
	
	for(i=basla; i<=bitis; i=i+artim)
	{
		printf("%d \n",i);				
	}	
}
