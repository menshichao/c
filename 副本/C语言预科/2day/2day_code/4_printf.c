#include <stdio.h>

int fun()
{
	return 100;
}

int main(void)
{
	int a=10;
	int b=20;
	int c=a+b;
	float f=12.34;
	double d=22.22;

	//%c %d %f称为转换说明符
	printf("a=%d\n",a);
	printf("a=%d\n",520);
	printf("%d=%d+%d\n",a+b,a,b);	
	printf("%d\n",fun());
	printf("f=%.2f\n",f);
	printf("d=%.2f\n",d);

	return 0;
}
