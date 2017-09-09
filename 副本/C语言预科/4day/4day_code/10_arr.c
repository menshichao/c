#include <stdio.h>


int main(void)
{
	//矩阵转置
	int a[2][3]={1,22,53,94,45,36};
	int b[3][2];
	int i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			b[i][j]=a[j][i];
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}

	return 0;
}
