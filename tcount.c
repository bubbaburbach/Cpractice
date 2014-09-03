#include <stdio.h>

main()
{
	int t,tc;
	tc = 0;
	while((t=getchar())!=EOF)
		if(t='\t')
			tc++;
	printf("%d\n",tc);
}
