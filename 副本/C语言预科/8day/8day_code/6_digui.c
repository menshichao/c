#include <stdio.h>

void fun(int a[],int k)
{
	int tmp;

	if(k>1)
	{
		fun(a+1,k-2);
		tmp = a[0];
		a[0] = a[k-1];
		a[k-1] = tmp;
	}
}


int main(void)
{
	int b[5]={1,3,5,7,9};
	int i;

	for(i=0;i<5;i++)
		printf("%d\t",b[i]);
	printf("\n");
	fun(b,5);
	printf("****************************\n");
	for(i=0;i<5;i++)
		printf("%d\t",b[i]);
	printf("\n");

	return 0;
}
