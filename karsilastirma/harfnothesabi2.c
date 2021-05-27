// kullan�c�dan al�nan 2 vize 1 final notlar� s�ras�yla %30, %30 ve %40 a��rl�kla hesaplanarak ortalama elde edilecektir
// elde edilen ortalama a�a��daki tabloya g�re harfli notlara �evrilsin
// 80 - 100 => A, 60 - 79 => B, 40 -59 => C, 20 - 39 => D, 0 - 19 => F
// if else if

#include <stdio.h>

main()
{
	int v1, v2, v3;
	float ort;
	char harf_notu;
	
	printf("Lutfen sirasiyla vize ve final notlarini giriniz:\n");
	scanf("%d %d %d",&v1, &v2, &v3);
	
	ort = v1*0.3 + v2*0.3 + v3*0.4;
	
	// && => VE    || => VEYA
	
	if(ort>=80.00 && ort<=100)
	{
		harf_notu = 'A';
	}
	if(ort>=60.00 && ort<=79)
	{
		harf_notu = 'B';
	}
	if(ort>=40.00 && ort<=59)
	{
		harf_notu = 'C';
	}
	if(ort>=20.00 && ort<=39)
	{
		harf_notu = 'D';
	}
	if(ort>=0.00 && ort<=19)
	{
		harf_notu = 'F';
	}
	
	printf("Ortalamaniz  = %.2f \n",ort);
	printf("Harf Notunuz = %c",harf_notu);
}
