#include<stdio.h>

int main(void)
{
	int s[8]={1,2,3,4,5,6,7,8};
	int * p=s;

	int n=8;
	int l[n];

	int i;


	for(i=0;i<sizeof(s)/sizeof(int);i++)
		l[i]=p[sizeof(s)/sizeof(int)-i-1];

	for(i=0;i<sizeof(s)/sizeof(int);i++)
		printf("l[%d]= %d\n",i,l[i]);


	return 0;
}
