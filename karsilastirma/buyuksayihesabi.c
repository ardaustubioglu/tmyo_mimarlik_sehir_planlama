// kullan�c�dan al�nan 3 say�n�n en b�y���n� bulma

#include <stdio.h>

main()
{
	int s1, s2, s3;
	int max;
	
	printf("Lutfen 3 adet sayi giriniz:\n");
	scanf("%d %d %d",&s1, &s2, &s3);
	
	//--- ilk 2 say�n�n kar��la�t�r�lmas�
	if(s1>s2)
	{
		max = s1;
	}
	else
	{
		max = s2;
	}
	//---- ilk 2 say�n�n en b�y��� ile 3. say�n�n kar��la�t�r�lmas�
	if(s3 > max)
	{
		max = s3;
	}
	
	printf("En buyuk girilen sayi = %d dir",max);
}
