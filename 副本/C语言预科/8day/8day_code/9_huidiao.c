#include <stdio.h>


//回调函数：间接被调用的函数
void show(int n,int m)
{
	printf("n=%d\tm=%d\n",n,m);
}

void fun(int n,int m,void (*p)(int a,int b))
{
	p(n,m);
}

int main(void)
{

	fun(3,5,show);

	return 0;
}
