#include <stdio.h>
int main()
{
	char kr;
	printf("Lutfen bir karakter girin\n");
	kr = getchar(); 
	switch (kr)
	{
		case 'a':
			printf("a harfine bastiniz\n");
			break;
		case 'b':
			printf("b harfine bastiniz\n");
			break;
		case 'c':
			printf("c harfine bastiniz\n");	
			break;
		case 'd':
			printf("d harfine bastiniz\n");	
			break;				
		default:
			printf("a,b,c veya d ye basmadiniz\n");
			break;
	}
	return 0;
}
