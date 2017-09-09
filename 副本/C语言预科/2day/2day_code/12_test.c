#include <stdio.h>



int main(void)
{	
	int n=15,m=3;
	//逻辑或中，只要发现有假的，则后面不再操作，断路原则
	if((n!=5) || (m=23))
	{
		printf("n!=5 m!=3\n");
		printf("n==5 m!=3\n");
		printf("n!=5 m==3\n");
	}
	else
	{
		printf("m==5 n==3\n");
	}

	printf("m=%d\n",m);

	return 0;
}
