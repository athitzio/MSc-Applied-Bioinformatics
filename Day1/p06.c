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
		if( seq[i] == 'F')
		{
			total++;
		}
	}

	printf("Found %d Fs\n", total);
}
