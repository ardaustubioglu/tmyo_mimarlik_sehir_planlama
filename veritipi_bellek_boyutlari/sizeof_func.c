// Neden Veri Tipi kullanýyoruz?
// 4 temel veri tipi
// char - karakter saklar
// int - tamsayýlar
// float - kayan noktalý sayý, virgüllü sayý
// double - kayan noktalý sayý
// Niteleyiciler
// short
// long
// unsigned
// sizeof fonksiyonu -> veri tipinin bellekte kapladýðý alaný öðrenmek için kullanýlýr

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

// 1 bit  = 1 haneli binary(ikili taban) sayý => 0 - 1
// 1 byte = 8 haneli binary(ikili taban) sayý => 0000 0000 - 0000 0001 - 0000 0010 - ....
