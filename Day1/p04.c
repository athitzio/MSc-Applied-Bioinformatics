#include <stdio.h>
#include <string.h>

int main()
{
	char seq[1000];
	int  len;

	scanf("%s", seq);
	printf("%s\n", seq);
	len = strlen( seq );
	printf("The length is %d\n", len);
}
