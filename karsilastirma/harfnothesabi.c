// kullanýcýdan alýnan 2 vize 1 final notlarý sýrasýyla %30, %30 ve %40 aðýrlýkla hesaplanarak ortalama elde edilecektir
// elde edilen ortalama aþaðýdaki tabloya göre harfli notlara çevrilsin
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
	
	if(ort>=80.00)
	{
		harf_notu = 'A';
	}
	else if(ort>=60.00)
	{
		harf_notu = 'B';
	}
	else if(ort>=40.00)
	{
		harf_notu = 'C';
	}
	else if(ort>=20.00)
	{
		harf_notu = 'D';
	}
	else
	{
		harf_notu = 'F';
	}
	
	printf("Ortalamaniz  = %.2f \n",ort);
	printf("Harf Notunuz = %c",harf_notu);
}
