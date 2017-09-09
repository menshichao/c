#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	//布尔类型要么真要么假
	//非假(0)即真
	_Bool a;
	bool a;

	a=5;
	printf("a=%d\n",a);
	a=-1;
	printf("a=%d\n",a);
	a=0;
	printf("a=%d\n",a);
	a=true;
	printf("a=%d\n",a);
	a=false;
	printf("a=%d\n",a);

	return 0;
}
