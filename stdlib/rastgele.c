#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main()
{
	int sayi;
	time_t t;
	srand((unsigned)time(&t)); // rastgele fonksiyon için besleme deðerini belirler
	sayi = rand() % 50; // 0 ile 49 arasýnda rastgele sayý üretimi
	printf("Rastegel sayi = %d\n",sayi);
}
