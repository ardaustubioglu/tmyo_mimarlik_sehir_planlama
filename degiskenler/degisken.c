#include <stdio.h>
main()
{
	int en, boy;	//declaration - bildirim (de�i�ken)
	int h, a; // declaration
	float ucgen_alan = 0.0; //initialize - ba�lat�mlama (de�i�ken)
	h = 10;
	a = 3;
	en = 15;
	boy = 7;
	ucgen_alan = a * h / 2;
	printf("Dikdortgen alani = %d cm2\n",en*boy);
	printf("Ucgen alani = %.2f cm2\n",ucgen_alan);
	
}
