#include <stdio.h>

void fun(int x,int y)
{
	x=100;
	y=200;
}

void fun2(int *x,int *y)
{
	*x = 10;
	*y = 20;
}

int main(void)
{
	int n,m;

	scanf("%d%d",&n,&m);
	printf("n=%d\tm=%d\n",n,m);
//	fun(n,m);//值传递
//	printf("n=%d\tm=%d\n",n,m);

	fun2(&n,&m);//地址传递
	printf("n=%d\tm=%d\n",n,m);

	return 0;
}
