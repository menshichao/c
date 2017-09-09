#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p,i;

	//1.在堆上申请20字节的空间
	p = (int *)malloc(sizeof(int)*5);
	if(NULL == p)
	{
		perror("malloc failed");
		exit(1);
	}
	//2.放入数据
	for(i=0;i<5;i++)
		scanf("%d",p+i);

	//3.输出
	for(i=0;i<5;i++)
		printf("%d\t",*(p+i));
	printf("\n");

	return 0;
}
