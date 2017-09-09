#include<stdio.h>


int main (void)
{
	int a[10] ={1,3,5,7,9,11,13,15,17,19};
	int b[10] ={4,5,6,7,8,10,14,20,22,23};

	int *q[20]={NULL};
	int i;
	int j;
	int n,m,x;
	int * y;	


	for (i=0;i<sizeof(a)/sizeof(int);i++)
		q[i]=&a[i];
	for (j=0;j<sizeof(b)/sizeof(int);j++)
		q[i+j]=&b[j];

	for (n=0;n<i+j;n++)
		printf("%d ",*q[n]);
	printf("\n");



	for(m=0;m<n-1;m++)
	{
		for(x=0;x<n-m-1;x++)
		{
			if(*q[x]>*q[x+1])
				{
				y=q[x+1];
				q[x+1]=q[x];
				q[x]=y;
				}	
		}
	}

	for (n=0;n<i+j;n++)
		printf("%d ",*q[n]);
	printf("\n");


	


	return 0;
}











