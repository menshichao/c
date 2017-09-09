#include <stdio.h>

int fun()
{
	return 22;
}

int main(void)
{
	int a=20;
	int b=30;
	int c,d;
	
	c=a+b;
	d=fun();

	printf("d=%d\n",d);

	return 0;
}
