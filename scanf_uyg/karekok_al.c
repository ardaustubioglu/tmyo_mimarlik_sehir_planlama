#include <stdio.h>
#include <math.h>
main()
{
	int sayi;
	float kok;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	kok = sqrt(sayi);	// karekök alma fonksiyonu
	printf("%d sayisinin karekoku = %.2f dir",sayi, kok);
	return 0;	
}
