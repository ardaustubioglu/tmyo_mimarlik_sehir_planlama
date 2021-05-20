#include <ctype.h>
#include <stdio.h>

main()
{
	char c = 'p';
	int sonuc = isupper(c);
	//int sonuc = islower(c);
	//int sonuc = isalpha(c);
	//int sonuc = isalnum(c);
	printf("Sonuc = %d",sonuc);
}
