#include<stdio.h>

int main(void)
{
	char a[]="Computer Science";
	char *p;
	int i;
	p=a;
	
	printf("a=");
	for (i=0;i<(sizeof(a)-1);i++)
		printf("%c ",*(p+i));
	printf("\n");

	return 0;
}
