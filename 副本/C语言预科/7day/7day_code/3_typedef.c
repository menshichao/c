#include <stdio.h>

typedef int LOVE;//LOVE代替int,给int取别名为LOVE
typedef int * YOU;//给int *取别名为YOU

int main(void)
{
	LOVE a=100;
	YOU p=&a;
	int d=20;
	YOU pb,pc;

	pb=&d;
	pc=&a;

	printf("*p = %d\n",*p);
	printf("*pb = %d\n",*pb);
	printf("*pc = %d\n",*pc);

	return 0;
}
