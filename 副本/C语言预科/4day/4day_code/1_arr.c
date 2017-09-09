#include <stdio.h>


int main(void)
{
#if 0
	//数组a中有5个类型为int型的元素
	int a[5];
	//数组str中有10个类型为char型的元素
	char str[10];
#endif
	//完全初始化:按照数组下标依次给所有元素赋值
//	int a[5]={1,2,3,4,5};
//	int a[]={2,4,6,8,10};
	//部分初始化:按照数组下标依次给前面的下标赋值，后面的默认补0
//	int a[5]={1,2,3};
	//指定初始化:对指定的下标赋值，没有赋值的默认为0
	int a[5]={[3]=5,[1]=3};
	int a[5]={6,7,[3]=5,[1]=3};

	int i;
//	printf("sizeof(a)=%d\n",sizeof(a));

	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		printf("%d\t",a[i]);
	}

	printf("\n");

	return 0;
}
