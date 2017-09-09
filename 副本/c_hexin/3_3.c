#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20]="Hello ";
	char str2[20]="World ";
	char str3[2][20]={"\0"};	

	
	int n=strlen(str1);
	int m=strlen(str2);

	char(*p)[20];
	p=str3;
		
	strcpy(str3[0],str1);
	strcpy(str3[1],str2);


	int i,j;

	for(i=0;i<2;i++)
	{	for (j=0;j<6;j++)		
			printf("%c",*(*(p+i)+j));
	}
return 0;
}
