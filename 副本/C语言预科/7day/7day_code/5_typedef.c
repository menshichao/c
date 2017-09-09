#include <stdio.h>

typedef int a[5];//a给int [5]取别名

int main(void)
{
//	int b[5]={1,3,5,7,9};
	a b={1,3,5,7,9};//等效与第七行
	int i;

	for(i=0;i<5;i++)
		printf("%d\t",b[i]);
	printf("\n");


	return 0;
}
