#include <stdio.h>


//递归函数
void fun(int n)
{
	printf("n=%d\n",n);

	if(n>0)
		fun(n-1);
}


int main(void)
{
	
	fun(5);

	return 0;
}
