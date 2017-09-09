#include <stdio.h>


//void show(int n,int b[])
void show(int n,int *b)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",b[i]);
	printf("\n");
}

int main(void)
{
	int a[5]={1,12,3,94,5};

	show(5,a);

	return 0;
}
