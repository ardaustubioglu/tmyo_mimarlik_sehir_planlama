// kullanýcýdan alýnan 3 sayýnýn en büyüðünü bulma

#include <stdio.h>

main()
{
	int s1, s2, s3;
	int max;
	
	printf("Lutfen 3 adet sayi giriniz:\n");
	scanf("%d %d %d",&s1, &s2, &s3);
	
	//--- ilk 2 sayýnýn karþýlaþtýrýlmasý
	if(s1>s2)
	{
		max = s1;
	}
	else
	{
		max = s2;
	}
	//---- ilk 2 sayýnýn en büyüðü ile 3. sayýnýn karþýlaþtýrýlmasý
	if(s3 > max)
	{
		max = s3;
	}
	
	printf("En buyuk girilen sayi = %d dir",max);
}
