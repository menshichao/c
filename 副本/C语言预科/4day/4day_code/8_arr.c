#include <stdio.h>



int main(void)
{
	int a[2][3];
	int i,j;

	//赋值
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}

	return 0;
}
