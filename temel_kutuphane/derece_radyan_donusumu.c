#include <stdio.h>
#include <math.h>
main()
{
	float pi = 3.14;
	float derece, radyan;
	float sonuc;
	
	printf("Lutfen derece cinsinden bir aci degeri giriniz:");
	scanf("%f",&derece);
	radyan = derece * ( pi / 180);
	
	printf("Sin(%.2f) = %.2f\n",derece,sin(radyan));
	printf("Cos(%.2f) = %.2f\n",derece,cos(radyan));
	printf("Tan(%.2f) = %.2f\n",derece,tan(radyan));
	//printf("Cot(%.2f) = %.2f\n",derece,1 / tan(radyan));
	return 0;	
}
