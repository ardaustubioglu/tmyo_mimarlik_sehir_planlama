#include <stdio.h>
main()
{
	//SAB�TLER - CONSTANT (CONST)
	const float PI = 3.142857; // READ-ONLY - Yaln�zca okunabilir
	int r;	// yar��ap
	float cevre, alan; // cevre, alan
	//�emberin �evre hesab�	
	r = 6;
	cevre = 2 * PI * r;
	printf("Cemberin cevresi = %.2f dir\n",cevre);
	alan = PI * r * r;
	printf("Dairenin alani = %.2f dir\n",alan);
}
