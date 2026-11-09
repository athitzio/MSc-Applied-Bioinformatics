#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char seq[1000];
	char smallseq[50];
	int  len, i, total=0, lensmall;

	printf("Enter the long sequence:");
	scanf("%s", seq);
	len = strlen(seq);
	printf("Enter the short sequence:");
	scanf("%s", smallseq);
	lensmall = strlen(smallseq);
	if(len < 5 || lensmall != 5)
		{
			printf("NONSENSE!\n");
			exit(1);
		}
	for(i = 0 ; i < len-4 ; i++)
	{
		if( seq[i  ] == smallseq[0]  &&
		    seq[i+1] == smallseq[1]  &&
		    seq[i+2] == smallseq[2]  &&
		    seq[i+3] == smallseq[3]  &&
		    seq[i+4] == smallseq[4]   )
		{
			printf("Found it at pos %d\n", i+1);

		}
	}

}
