#include <stdio.h>
int main()
{
	int i; /* bir tamsay� */
	int dizi[5]; /* 5 elemanl� bir tamsay� dizi */
	double d; /* bir gercel say� */
	double mizan[6]; /* 6 elemanl� bir gercel dizi */
	char c; /* tek bir karakter */
	char str[] = "ogrenci"; /* bir karakter toplulu�u */
	// m a s a  == > 'm' 'a' 's' 'a' '\0' (null)
	printf("sizeof(int) = %d\n",sizeof(int));
	printf("sizeof(i) = %d\n",sizeof(i));
	printf("sizeof(dizi) = %d\n\n",sizeof(dizi));
	printf("sizeof(double)= %d\n",sizeof(double));
	printf("sizeof(d) = %d\n",sizeof(d));
	printf("sizeof(mizan) = %d\n\n",sizeof(mizan));
	printf("sizeof(char) = %d\n",sizeof(char));
	printf("sizeof(c) = %d\n",sizeof(c));
	printf("sizeof(str) = %d\n",sizeof(str));
	return 0;
}
