#include <stdio.h>

typedef int B;
typedef int * APP;
#define I int *


int main(void)
{
	B a=10,b=20;
	APP pa,pb; //两个变量均为int *
	I pi,*pj;//宏定义I代替int *只对第一个变量有效，后面变量为基本类型
	pi=&a;
	pj=&b;
	pa=&a;
	pb=&b;

	printf("*pa=%d\n",*pa);
	printf("*pb=%d\n",*pb);
	printf("*pi=%d\n",*pi);
	printf("*pj=%d\n",*pj);

	return 0;
}


#if 0
typedef int  APP;
#define I int 

int main(void)
{
	APP a=10;
	I b=200;

	printf("a=%d\n",a);
	printf("b=%d\n",b);

	return 0;
}
#endif
