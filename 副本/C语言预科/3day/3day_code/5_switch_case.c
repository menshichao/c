#include <stdio.h>


int main(void)
{
	int n;

	scanf("%d",&n);

	switch(n)
	{
		case 1:
			printf("11111111111111\n");
			break;
		case 2:
			printf("22222222222222\n");
			break;
		case 3:
			printf("33333333333333\n");
			break;
		default:
			printf("error\n");
	}

	return 0;
}
