#include <stdio.h>


int main(void)
{
	int i;
	
	//中间段不写的话，默认为真，死循环
	for(i=0; ;i++);
		printf("hello lonely woman\n");

	printf("i=%d\n",i);

	return 0;
}
