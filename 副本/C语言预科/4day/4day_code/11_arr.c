#include <stdio.h>


int main(void)
{
	int a[2][3]={1,2,3,4,5,6};

	printf("a=%p\n",a);
	printf("a+1=%p\n",a+1);
	printf("&a=%p\n",&a);
	printf("&a+1=%p\n",&a+1);
	printf("a[0]=%p\n",a[0]);
	printf("a[0]+1=%p\n",a[0]+1);
	printf("&a[0][0]=%p\n",&a[0][0]);
	printf("&a[0][0]+1=%p\n",&a[0][0]+1);

	return 0;
}
