// kullanıcıdan alınan 3 sayının en büyüğünü bulma

#include <stdio.h>

main()
{
	int s1, s2, s3;
	int max;
	
	printf("Lutfen 3 adet sayi giriniz:\n");
	scanf("%d %d %d",&s1, &s2, &s3);
	
	//--- ilk 2 sayının karşılaştırılması
	if(s1>s2)
	{
		max = s1;
	}
	else
	{
		max = s2;
	}
	//---- ilk 2 sayının en büyüğü ile 3. sayının karşılaştırılması
	if(s3 > max)
	{
		max = s3;
	}
	
	printf("En buyuk girilen sayi = %d dir",max);
}
