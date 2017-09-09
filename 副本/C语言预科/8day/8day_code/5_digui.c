#include <stdio.h>

int fun(int n)
{
	int sum=0;
	if(n>0)
	{
		sum = n+fun(n-1);
		printf("%d=%d+fun(%d-1)\n",sum,n,n);
	}
	return sum;
}


int main(void)
{
	int a;

	printf("请输入 你要球1到多少的和？");
	scanf("%d",&a);

	printf("%d\n",fun(a));

	return 0;
}
