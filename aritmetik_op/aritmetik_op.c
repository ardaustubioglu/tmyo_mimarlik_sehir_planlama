#include <stdio.h>
main()
{
	int sayi1, sayi2;
	sayi1 = 157;
	sayi2 = 36;
	printf("%d + %d = %d \n",sayi1, sayi2, sayi1+sayi2);
	printf("%d - %d = %d \n",sayi1, sayi2, sayi1-sayi2);
	printf("%d * %d = %d \n",sayi1, sayi2, sayi1*sayi2);
	printf("%d / %d = %.2f \n",sayi1, sayi2, (float)sayi1/sayi2); //Casting
	printf("%d mod %d = %d \n",sayi1, sayi2, sayi1%sayi2);
}
