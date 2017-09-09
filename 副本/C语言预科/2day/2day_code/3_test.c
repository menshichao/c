#include <stdio.h>
#include <string.h>

int main(void)
{
	//sizeof计算时会包括'\0'的长度
	//sizeof是关键字
	printf("%d\n",sizeof("helloworld"));
	//strlen计算时不会包括'\0'的长度
	//strlen是函数
	printf("%d\n",strlen("helloworld"));

	return 0;
}
