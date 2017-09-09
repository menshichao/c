#include <stdio.h>

extern int x1;//外部存储

int d=40;//全局非static静态存储
static int n=100;//全局static静态存储

void fun()
{
	int a=10;//自动存储类型
	register int b=20;//寄存器存储类型
	static int c=30;//局部static静态存储
}

int main(void)
{
	printf("x1 = %d\n",x1);

	return 0;
}
