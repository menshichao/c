#include <stdio.h>


int main(void)
{
	char a=5,b=13;
	char c=-6;
	char d;

	//若a大于b成立的话，则取a的值，否则取b的值
	d = (a>b?a:b);

	printf("d=%d\n",d);

	printf("~a = %d\n",~a);
	printf("a^b = %d\n",a^b);
	printf("c>>2 = %d\n",c>>2);

	return 0;
}
