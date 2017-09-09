#include<stdio.h>
#include<string.h>


int main(void)
{
	char str1[20]={"Hello "};
	char str2[20]={"World "};
	char *q1=str1;
	char *q2=str2;
	int i;	
	printf("str1=%d str2= %d\n",strlen(str1),strlen(str2));

	while(*q1!='\0')
		q1++;

	for(i=0;i<strlen(str2);i++)
		*(q1+i)=*(q2+i);
	
	for(i=0;i<(strlen(str1)+strlen(str2));i++)
	printf("str1+str2=%c\n",str1[i]);
	
	return 0;

}




