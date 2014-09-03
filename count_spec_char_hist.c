# include <stdio.h>

main()
{
	int c, i , nwhite, nother;
	int ndigit[10];
	
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while (( c = getchar()) != EOF)
	{
		if (c >='0' && c <='9')
			++ndigit[c-'0'];
		else if ( c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	for (i = 0; i<10; ++i)
	{
		printf("%3d:",i);
		while(ndigit[i] > 0)
		{
			printf("=");
			--ndigit[i];
		}
		printf("\n");
	}
	printf("wht:");
		while(nwhite > 0)
		{
			printf("=");
			--nwhite;
		}
	printf("\noth:");
		while(nother > 0)
		{
			printf("=");
			--nother;
		}
	printf("\n");
}
