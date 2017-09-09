#include <stdio.h>


int main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *pa1=&a[2];
	int *pa2=&a[7];
	
	//指向同一数组的两个指针相减，表示两者之间相差多少个元素个数
	printf("pa1 = %p\n",pa1);
	printf("pa2 = %p\n",pa2);
	printf("pa2-pa1=%d\n",pa2-pa1);


	return 0;
}
