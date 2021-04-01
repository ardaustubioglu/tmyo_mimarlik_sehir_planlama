// Neden Veri Tipi kullan�yoruz?
// 4 temel veri tipi
// char - karakter saklar
// int - tamsay�lar
// float - kayan noktal� say�, virg�ll� say�
// double - kayan noktal� say�
// Niteleyiciler
// short
// long
// unsigned
// sizeof fonksiyonu -> veri tipinin bellekte kaplad��� alan� ��renmek i�in kullan�l�r

#include <stdio.h>
main()
{
	printf("Karakter degiskeni (char) boyutu = %d bit\n",sizeof(char)*8);
	printf("Tamsayi degiskeni (int) boyutu = %d bit\n",sizeof(int)*8);
	printf("Kayan noktali degisken (float) boyutu = %d bit\n",sizeof(float)*8);
	printf("Kayan noktali degisken (double) boyutu = %d bit\n\n",sizeof(double)*8);
	
	printf("Kisa tamsayi degiskeni (short) boyutu = %d bit\n",sizeof(short)*8);
	printf("Uzun tamsayi degiskeni (long) boyutu = %d bit\n",sizeof(long)*8);
	printf("Pozitif tamsayi degiskeni (unsigned) boyutu = %d bit\n",sizeof(unsigned)*8);
	
}

// 1 bit  = 1 haneli binary(ikili taban) say� => 0 - 1
// 1 byte = 8 haneli binary(ikili taban) say� => 0000 0000 - 0000 0001 - 0000 0010 - ....
