#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//将一个int型数据放到堆上
	int *p;

	p = (int *)malloc(sizeof(int)*5);
	if(p==NULL)
	{
		perror("malloc failed");
		exit(1);//表示结束当前程序
	}
	*p = 5;
	printf("*p = %d\n",*p);
	
#if 0
	p += 3;//不能释放空间中的某一部分
	free(p);
#endif
#if 0
	free(p);//不能多次释放同一块空间
	free(p);
#endif

#if 0
	free(p);
	p = NULL;//空间释放完之后要赋值为NULL

	*p = 20;
	printf("*p = %d\n",*p);
#endif
	return 0;
}
