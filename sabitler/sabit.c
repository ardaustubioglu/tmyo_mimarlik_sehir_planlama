#include <stdio.h>
main()
{
	//SABÝTLER - CONSTANT (CONST)
	const float PI = 3.142857; // READ-ONLY - Yalnýzca okunabilir
	int r;	// yarýçap
	float cevre, alan; // cevre, alan
	//Çemberin çevre hesabý	
	r = 6;
	cevre = 2 * PI * r;
	printf("Cemberin cevresi = %.2f dir\n",cevre);
	alan = PI * r * r;
	printf("Dairenin alani = %.2f dir\n",alan);
}
