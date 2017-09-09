#include <stdio.h>


int main(void)
{
	int n=1,i;
	//变长数组：数组元素个数可变的数组
	scanf("%d",&n);
	int a[n];
	
	
	printf("sizeof(a)/sizeof(int)=%d\n",sizeof(a)/sizeof(int));

	for(i=0;i<n;i++)
		a[i]=i+1;

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		if(i%5==0)
			printf("\n");
	}
	printf("\n");

	return 0;
}
