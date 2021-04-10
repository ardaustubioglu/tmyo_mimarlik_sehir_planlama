#include <stdio.h>
main()
{
	int en, boy;	//declaration - bildirim (deðiþken)
	int h, a; // declaration
	float ucgen_alan = 0.0; //initialize - baþlatýmlama (deðiþken)
	h = 10;
	a = 3;
	en = 15;
	boy = 7;
	ucgen_alan = a * h / 2;
	printf("Dikdortgen alani = %d cm2\n",en*boy);
	printf("Ucgen alani = %.2f cm2\n",ucgen_alan);
	
}
