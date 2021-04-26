#include <stdio.h>
#include <math.h>
main()
{
	// ax^2 + bx + c = 0
	int a,b,c;
	float delta;
	float x1, x2;
	
	printf("Lutfen denklem katsayilarini giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	delta = sqrt((b * b) - (4 * a * c));
	x1 = (-b + delta) / (2 * a);
	x2 = (-b - delta) / (2 * a);
	
	printf("x1 = %.2f ve x2 = %.2f",x1,x2);
	return 0;
	
	//2x^2 + 6x - 20 = 0  	
}
