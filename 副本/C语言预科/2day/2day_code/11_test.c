#include <stdio.h>


int main(void)
{
	int n=3,m=3;

	//逻辑与运算中，发现前面一旦有假的出现，则后面的不再操作，断路原则
	if((n==5) && (m=4))
	{
		printf("m n que shi shi wei 3 5\n");
	}
	else
	{
		printf("n==5 m!=3\n");
		printf("n!=5 m!=3\n");
		printf("n!=5 m==3\n");
	}

	printf("n=%d\n",n);
	printf("m=%d\n",m);

	return 0;
}
