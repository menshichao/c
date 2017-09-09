#include <stdio.h>


int main(void)
{
	
	//指针的加法：指针加n，相当于从低地址往高地址移动，移动n倍的
	//数据类型大小
	int a=10;
	int *p=&a; //int *p; p=&a;
	printf("p = %p\n",p);
	printf("p+1 = %p\n",p+1);
	printf("*********************\n");
	short s=10;
	short *ps=&s; //int *p; p=&a;
	printf("ps = %p\n",ps);
	printf("ps+1 = %p\n",ps+1);
	printf("*********************\n");
	char c=10;
	char *pc=&c; //int *p; p=&a;
	printf("pc = %p\n",pc);
	printf("pc+1 = %p\n",pc+1);
	printf("*********************\n");
	double d=10;
	double *pd=&d; //int *p; p=&a;
	printf("pd = %p\n",pd);
	printf("pd+1 = %p\n",pd+1);
	printf("*********************\n");


	return 0;
}
