#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[1000];
	int  len, i, total=0;

	scanf("%s", seq);
	printf("%s\n", seq);
	len = strlen(seq);
	printf("The length is %d\n", len);
	if(len < 5)
		{
			printf("NONSENSE!\n");
			exit(1);
		}
	for(i = 0 ; i < len-4 ; i++)
	{
		if( seq[i  ] == 'F' &&
		    seq[i+1] == 'L' &&
		    seq[i+2] == 'A' &&
		    seq[i+3] == 'R' &&
		    seq[i+4] == 'E'
		  )
		{
			printf("Found it at pos %d\n", i+1);

		}
	}

}
