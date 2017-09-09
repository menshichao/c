#include <stdio.h>


int main(void)
{
	int a[5]={1,3,5,7,9};

	printf("a=%p\n",a);
	printf("a+1=%p\n",a+1);
	printf("&a=%p\n",&a);
	printf("&a+1=%p\n",&a+1);

	return 0;
}
