// kullan�c�dan al�nan 2 vize 1 final notlar� s�ras�yla %30, %30 ve %40 a��rl�kla hesaplanarak ortalama elde edilecektir
// elde edilen ortalaman�n 60 �st� GE�ER, alt� KALIR �eklinde kullan�c�ya g�sterilecek

#include <stdio.h>

main()
{
	int v1, v2, v3;
	float ort;
	
	printf("Lutfen sirasiyla vize ve final notlarini giriniz:\n");
	scanf("%d %d %d",&v1, &v2, &v3);
	
	ort = v1*0.3 + v2*0.3 + v3*0.4;
	
	if(ort >= 60.00)
	{
		printf("Ortalamaniz = %.2f \n",ort);
		printf("Tebrikler dersi basariyla GECTINIZ!!!");
	}
	else
	{
		printf("Ortalamaniz = %.2f \n",ort);
		printf("Maalesef dusuk ortalamadan dolayi dersten KALDINIZ");
	}
}
