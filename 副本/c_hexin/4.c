#include<stdio.h>

int main (void)
{
	int arrary[3][4]={{7,10,-2,3},{14,30,6,-15},{0,5,27,-7}};
	int i,j,sum=0;
	int (*p)[4];
	
	p=arrary;

	for(i=0;i<3;i++)
	{	for(j=0;j<4;j++)
			sum+=*((*p+i)+j);

	}
	printf("sum= %d \n",sum);

	return 0;
}
