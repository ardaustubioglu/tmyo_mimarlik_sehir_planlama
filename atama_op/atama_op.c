#include <stdio.h>
main()
{
	// Atama Operatörleri
	// =, +=, -=, *=, /=, %=, ++, --
	int sayi1, sayi2;
	int temp1, temp2;
	sayi1 = 10; // eþitliðin sað tarafý her zaman hesaplanýr ve eþitliðin sol tarafýna atanýr
	sayi2 = sayi1 * 3;
	printf("sayi1 = %d  ---  sayi2 = %d\n",sayi1, sayi2);
	
	sayi1 += 4;	// sayi1 = sayi1 + 4;
	sayi2 -= sayi1; // sayi2 = sayi2 - saayi1
	printf("sayi1 = %d  ---  sayi2 = %d\n",sayi1, sayi2);
	
	sayi1 *= 3; // sayi1 = sayi1 * 3
	sayi2 /= 2; // sayi2 = sayi2 / 2
	printf("sayi1 = %d  ---  sayi2 = %d\n",sayi1, sayi2);
	
	sayi1 %= 5;	// sayi1 = sayi % 5
	printf("sayi1 = %d\n",sayi1);
	
	sayi1++; // sayi1 = sayi1 + 1 yada sayi1 += 1
	sayi2--; // sayi2 = sayi2 - 1 yada sayi1 -= 1
	printf("sayi1 = %d  ---  sayi2 = %d\n",sayi1, sayi2);
	
	++sayi1;
	--sayi2;
	printf("sayi1 = %d  ---  sayi2 = %d\n",sayi1, sayi2);
	
	temp1 = sayi1++;  //sayi1 = 4 tü, temp1 =>4 sayi1 => 5
	temp2 = --sayi2;  // sayi2 = 6 ydý, sayi2 => 5 temp2 => 5
	printf("temp1 = %d  ---  temp2 = %d\n",temp1, temp2);
}
