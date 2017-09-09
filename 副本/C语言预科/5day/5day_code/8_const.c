#include <stdio.h>

#if 0
#endif

void fun1()
{
	int a=10;
	int b=30;
	//*p常量化(只读),p可变
	const int *p=&a;
	
//	*p = 200;//error只读变量
	p = &b;

	printf("*p = %d\n",*p);

}

void fun2()
{
	int a=10;
	int b=200;
	//*p常量化(只读),p可变
	int const *p=&a;
	p=&b;
//	*p=200;//error
	printf("*p = %d\n",*p);
}

void fun3()
{
	int a=10;
	int b=20;
	//p是只读变量，*p可变
	int * const p=&a;
	*p = 200;
//	p = &b;//error
	printf("*p = %d\n",*p);
}

void fun4()
{	
	int a=10;
	int b=20;
	//p *p均不可变，为只读
	const int * const p=&a;

//	*p = 200;//error
//	p = &b;//error

	printf("*p = %d\n",*p);
}

int main(void)
{

	fun4();

	return 0;
}
