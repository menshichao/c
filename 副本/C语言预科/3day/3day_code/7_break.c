#include <stdio.h>


int main(void)
{
	int i=0;

	while(i<5)
	{
		printf("i=%d\n",i++);

		if(i==3)
			break;
		
		printf("hello world\n");
		printf("farsight\n");
		printf("^_^\n");

	}

	printf("********end*********\n");

	return 0;
}
