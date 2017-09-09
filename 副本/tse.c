#include <stdio.h>
#include <string.h>

int main(void)
{      
        int len1 = 0, len2 = 0;  
	char str1[] = "hello ";
	char str2[] = "world";
        char *q;

	char *p[20] = {NULL};

	int i, j;
	
	len1 = strlen(str1);
	len2 = strlen(str2);

	q = str1;

	for(i = 0; i < len1; i++)
	{
		p[i] = q + i;
	}

	q = str2;	

	for(j = 0; j <= len2; j++)
	{
		p[i + j] = q+j;
	}

	for(i = 0; i < (len1 + len2); i++)
		printf("%c",*p[i]);
	printf("\n");
	

	return 0;
}





