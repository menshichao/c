#include <stdio.h>


int main(void)
{
	char ch='A';
	int *p;
	
	//指针指向对象的类型要与自己类型一致
	p = &ch;

	printf("*p = %hhd\n",*p); 
	printf("ch = %d\n",ch); 
	printf("*p = %c\n",*p); 

	printf("p = %p\n",p);
	printf("&ch = %p\n",&ch);

	return 0;
}
