#include <stdio.h>


int main(void)
{
	int a=10;
	char ch='A';
	void *p;

//	p = &a;
	p = &ch;
	printf("*p = %c\n",*(char *)p);
//	printf("*p = %d\n",*(int *)p);

	return 0;
}
