#include <stdio.h>

#define IN 0 
#define OUT 1

main()
{
	int c,state;
	
	state = OUT;

	while ((c=getchar()) != EOF)
	{
		if(c == '\n' || c == '\t' || c == ' ')
			putchar('\n');
		else
			putchar(c);
	}
}
