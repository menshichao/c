#include <stdio.h>

void fun(int n,int m);

int main(void)
{
	int n,m;

	scanf("%d%d",&n,&m);
	//实参：函数调用时的参数
	fun(n,m);//函数调用

	int a,b;

	scanf("%d%d",&a,&b);
	fun(a,b);//函数调用

	return 0;
}


//定义函数：无返回值，带有两个int型参数
//形参：函数定义时的参数
void fun(int n,int m)
{
	int max;

	if(n>m)
		max=n;
	else
		max=m;
	printf("max=%d\n",max);
}
