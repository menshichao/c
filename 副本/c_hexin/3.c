#include<stdio.h>
#include<string.h>

int main (void)
{
	char str1[20]={"Hello "};
	char str2[20]={"World "};
	char *p1 =str1;
	char *p2 =str2;
	
	char *p[40]={NELL};


	int i,n=strlen(str1),m=strlen(str2);


	for(i=0;i<n;i++)
		p[i]=(p1+i);
	for(i=0;i<m;i++)
		p[n+i]=(p2+i);

//	*p[n+m]="/0";
	
	for(i=0;i<n+m+1;i++)
		printf("*p[%d]= %c ",i,*p[i]);

	printf("\n");

	
	return 0;
}
