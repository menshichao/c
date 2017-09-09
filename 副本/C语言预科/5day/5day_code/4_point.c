#include <stdio.h>


int main(void)
{
	int a=20;
	int *p=&a;
	printf("sizeof(p) = %d\n",sizeof(p));
	printf("sizeof(*p) = %d\n",sizeof(*p));

	char c=30;
	char *pc=&c;
	//计算的是指针本身所占用字节数的大小
	printf("sizeof(pc) = %d\n",sizeof(pc));
	//计算指针指向对象类型所占的字节数
	printf("sizeof(*pc) = %d\n",sizeof(*pc));

	return 0;
}
