#include<stdio.h>
#include<string.h>

int main (void)
{
	char str1[20]={"Hello "};
	char str2[20]={"World "};
	char str3[20];
	
	char *p;
	int i;

	p=str1;
	
//	p+strlen(str1)=str2;
	(p+5)=str2;
		
	for(i=0;i<12;i++)
		printf("%c",*(p+i));




	return 0;
}
