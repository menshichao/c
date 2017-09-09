#include <stdio.h>


void show(int n,int m,int b[n][m])
{
	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}

}

int main(void)
{
	int a[2][3]={1,2,3,4,5,6};

	show(2,3,a);

	return 0;
}
