//#include <head.h>
//#include <stdio.h>
#include "head.h"

#define PI 3.14//不带参宏

#define FUM(a,b) a+b*a//带参宏
#define FUN(a,b) (a)+(b)*(a)

int fun(int n,int m)
{

	return n+m*n;
}

int main(void)
{
	//this is a demo about say hello to ....
	printf("hello lonely woman\n");
//	printf("%d\n",FUM(3+2,5-1));
	//宏不讲究类型
	printf("%f\n",FUN(3.23+2,5.5-1));
	//函数参数类型已经确定
	printf("%d\n",fun(3.23+2,5.5-1));

	printf("PI = %.2f\n",PI);

	return 0;
}
