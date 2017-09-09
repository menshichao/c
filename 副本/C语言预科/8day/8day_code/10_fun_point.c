#include <stdio.h>


//char *p(int n,int m);//指针函数：返回值为指针的函数
//char (*p)(int n,int m);//函数指针：指向函数的指针

void fun(int n)
{
	printf("n=%d\n",n);
}

int main(void)
{
//	void (*p)(int a)=fun;
	void (*p)(int a)=&fun;

//	p(5);
	(*p)(5);
	return 0;
}

