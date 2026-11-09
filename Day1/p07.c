#include <stdio.h>
#include <string.h>

int main()
{
	char seq[1000];
	int  len, i, total=0;

	scanf("%s", seq);
	printf("%s\n", seq);
	len = strlen( seq );
	printf("The length is %d\n", len);

	for( i=0 ; i<len ; i++ )
	{
		if( seq[i  ] == 'F' &&
		    seq[i+1] == 'L' &&
		    seq[i+2] == 'A' &&
		    seq[i+3] == 'R' &&
		    seq[i+4] == 'E' )
		{
			total++;
		}
	}

	printf("Found it %d times.\n", total);
}
