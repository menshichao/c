#include <stdio.h>

//内联函数
inline void fun(int a,int b)
{
	printf("%d+%d=%d\t",a,b,a+b);
}

int main(void)
{

	fun(4,6);

	return 0;
}
