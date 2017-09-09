#include <stdio.h>

typedef union{
	long i;
	int k[5];
	char c;
}DATA;

struct data{
	int cat;
	DATA cow;
	double dog;
}too;

int main(void)
{
	DATA max;

	printf("%d\n",sizeof(struct data)+sizeof(max));

//	printf("%d\n",sizeof(long));	

	return 0;
}
