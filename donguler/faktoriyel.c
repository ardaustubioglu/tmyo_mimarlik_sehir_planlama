// faktöriyel hesabý gerçekleþtirilecek
#include <stdio.h>

main()
{
	long i, n, faktor;
	
	printf("Hesaplanmasini istediginiz faktoriyel degerini giriniz:\n");
	scanf("%ld",&n);
	
	faktor = 1;
	for(i=1; i<=n; i++) // i++ yerine i = i + 1
	{
		faktor = faktor * i;
		printf("%d. Adim: %ld \n",i,faktor);		
	}
	
	printf("%ld! = %ld \n",n, faktor);
}
