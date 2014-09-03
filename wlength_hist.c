#include <stdio.h>

#define MAXLENGTH 10
#define IN 1
#define OUT 0

main()
{
	int c, i,length, state, max;
	int wl[MAXLENGTH] = {0};
	
	state = OUT;
	i = max = length = 0;

	while((c=getchar()) != EOF)
	{
		if ( state )
		{
			if ( c == '\n' || c == ' ' || c == '\t')
			{
				++wl[length];
				if (length > max)
					max = length;
				length = 0;
				state = OUT;
			}
			else
				++length;
		}
		else if (( c <= 'z' && c >= 'a')||(c <= 'Z' && c >= 'A'))
			state = IN;
	}
//	for(i = 0;i < MAXLENGTH;i++)
//	{
//		printf("%d\n",wl[i]);
//	}
	while ( max > 0)
	{
		printf("%2d| ",max);
		for(i=0; i<MAXLENGTH;i++)
		{
			if(wl[i]==max)
			{
				printf(" || ");
				--wl[i];
			}
			else
			{
				printf("    ");
			}
		}
		printf("\n");
		--max;
	}
	printf("  ");
	for(i = 0; i < MAXLENGTH; i++)
	{
		printf("____");
	}
	printf("\n");
	for(i = 0; i < MAXLENGTH; i++)
	{
	printf(" %2d ",i);
	}
	printf("\n");
}
