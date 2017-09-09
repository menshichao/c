#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//将一个int型数据放到堆上
	int *p;
#if 1
	p = (int *)malloc(sizeof(int));
	if(p==NULL)
	{
		perror("malloc failed");
		exit(1);//表示结束当前程序
	}
#endif
	*p = 5;
	printf("*p = %d\n",*p);

	return 0;
}
