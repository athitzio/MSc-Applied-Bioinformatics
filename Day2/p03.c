#include <stdio.h>
#include <string.h>

int main()
{
	char seq[1000];
	int  len, i, total=0;

	while( 1 )
	{
	total = 0;
	scanf("%s", seq);
	printf("%s\n", seq);
	len = strlen(seq);
	printf("The length is %d\n", len);

	for(i = 0 ; i < len ; i++)
	{
		if( seq[i] == 'G' || seq[i] == 'C')
		{
			total++;
		}
	}

	printf("The GC content is %f %%\n", (100.0*total)/len);

	}
}
