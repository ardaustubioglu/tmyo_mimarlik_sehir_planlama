#include <stdio.h>
main()
{
	//scanf
	int t;
	float g;
	printf("Bir gercel sayi girin: "); 
	scanf("%f",&g);
	printf("Bir tamsayi girin : "); 
	scanf("%d",&t);
	printf("\n");
	printf("\t %.2f * %.2f = %.2f\n",g,g,g*g);
	printf("\t %d * %d = %d\n",t,t,t*t);
	return 0;
}
