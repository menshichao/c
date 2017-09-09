#include <stdio.h>

//声明可以多次
int x1;
int x2;
int x3;
int x4;
//定义只能定义一次
int x1=10;//全局变量
int x2=20;

void fun()
{
	int x1=100;//局部变量
	x2 = 200;//全局变量
	printf("x1=%d\n",x1);
}
int x3=30;//全局变量
int main(void)
{
	int n=10;

	fun();
	printf("main x1=%d\n",x1);

	printf("x2 = %d\n",x2);
	printf("x3 = %d\n",x3);

	return 0;
}

int x4=400;//全局变量
