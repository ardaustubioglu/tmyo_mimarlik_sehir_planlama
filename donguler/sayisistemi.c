#include <stdio.h>

main()
{
	int i;
	for(i=0; i<128; i++)
	{
		printf("%4d %4o %2x %2X \n",i,i,i,i);
	}
}
