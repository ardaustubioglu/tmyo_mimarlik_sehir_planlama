// ax*x+bx+c = 0 denkleminin çözümü
#include <stdio.h>
#include <math.h>

main()
{
	float a,b,c,delta;
	float x1,x2,x,kok_delta;
	
	printf("Lutfen denklem katsayilarini giriniz:\n");
	scanf("%f %f %f",&a,&b,&c);
	
	delta = b*b - 4.0*a*c;
	
	if(delta >= 0.0)
	{
		x1 = (-b + sqrt(delta)) / (2.0*a);
		x2 = (-b - sqrt(delta)) / (2.0*a);
		
		printf("Denklemin reel kokleri:\n");
		printf("x1 = %.2f     x2 = %.2f",x1,x2);
	}
	else
	{
		kok_delta = (sqrt(-delta)) / (2.0*a);
		x = -0.5 * b / a ;
		printf("Denklemin karmasik kokleri:\n");
		printf("x1 = %.2f + (%.2f)i\n",x, kok_delta);
		printf("x2 = %.2f - (%.2f)i\n",x, kok_delta);
	}
}
