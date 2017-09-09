#include <stdio.h>
#include <stdarg.h>

//打印若干个整型数的函数
void fun(int n,...)
{
	va_list p;//字符指针变量
	int i;	

	va_start(p,n);//初始化

	for(i=0;i<n;i++)
		printf("%d\t",va_arg(p,int));//不断获取下一个值
	printf("\n");

	va_end(p);//释放p
}


int main(void)
{
	
	fun(3,2,4,6);
	fun(6,2,4,6,1,3,5);

	return 0;
}
