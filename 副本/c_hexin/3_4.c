#include<stdio.h>
#include<string.h>

int main (void)
{
	char str1[20]="Hello ";
	char str2[20]="World ";
	char str3[20]="\0";

	char(*p)[20];
	p=&str3;

	int i;

	for(i=0;i<strlen(str1);i++)
		*(*p+i)=str1[i];
	for(i=0;i<strlen(str2);i++)
		*(*p+strlen(str1)+i)= str2[i];

	for(i=0;i<strlen(str1)+strlen(str2);i++)
		printf("%c",*(*p+i));

	return 0;
}
