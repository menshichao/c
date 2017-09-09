#include <stdio.h>

void fun()
{
	int i=5;
	//static修饰局部变量，可以改变生存周期
	//具有记忆功能
	static int j=5;

	printf("i=%d\n",i++);
	printf("j=%d\n",j++);

}

int main(void)
{

	fun();
	fun();
	fun();

	return 0;
}
