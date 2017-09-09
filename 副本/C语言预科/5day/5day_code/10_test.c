#include <stdio.h>


int main(void)
{
	int a[5]={1,12,3,4,5};
	int *p,i;

	p = a;

	for(i=0;i<5;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\n",*(p+i),p[i],i[p],i[a],a[i],*(a+i));
	
		//*与++的优先级一样，结合方向从右到左
		//先取p,后*p,最后p+1;
	//	printf("%d\t",*p++);
//		printf("%d\t",(*p)++);//error只在第一个元素值的基础上不断加1
	}
	printf("\n");

	return 0;
}
