#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main()
{
	int sayi;
	time_t t;
	srand((unsigned)time(&t)); // rastgele fonksiyon i�in besleme de�erini belirler
	sayi = rand() % 50; // 0 ile 49 aras�nda rastgele say� �retimi
	printf("Rastegel sayi = %d\n",sayi);
}
