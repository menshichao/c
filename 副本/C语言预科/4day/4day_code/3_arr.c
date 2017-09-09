#include <stdio.h>

void fun(int n,int a[])
{
	int i;
//	for(i=0;i<sizeof(a)/sizeof(int);i++)
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}

int main(void)
{
	int a[5]={1,2,3,4,5};
	//数组传参传数组名	
	fun(5,a);

	return 0;
}
