#include <stdio.h>
main()
{
	const float PI = 3.142857;
	const int MAX = 100;
	char c = 'a';
	char metin[40] = "Bu bir string";
	int i = 22;
	float f = 10125683245698512.10;
	double d = 10125683245698512.44;
	
	printf("PI    = %.4f\n",PI);
	printf("MAX   = %d\n",MAX);
	printf("c     = %c\n",c);
	printf("metin = %s\n",metin);
	printf("i     = %d\n",i);
	printf("f     = %.2f\n",f);
	printf("d     = %.2f\n",d);	
}
