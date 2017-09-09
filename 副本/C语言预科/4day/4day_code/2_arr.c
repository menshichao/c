#include <stdio.h>



int main(void)
{
	int i;
	int a[5];
	//数组不能整体赋值,只能逐个元素赋值
//	a[]={1,2,3,4,5};//error

	for(i=0;i<5;i++)
//		a[i]=i+1;
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
	printf("\n");

	return 0;
}
