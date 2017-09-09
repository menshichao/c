#include <stdio.h>


int main(void)
{
	int a=10;
	int *p;
	
	p = &a;

	//在操作指针之前必须先指向一个对象，若没有则为野指针，属于
	//非法操作，容易引起段错误
	*p = 20;

	printf("*p = %d\n",*p);
	printf("a = %d\n",a);

	printf("p = %p\n",p);
	printf("&a = %p\n",&a);

	return 0;
}
