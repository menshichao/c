#include <stdio.h>

struct A{
	int a;
	char c;
	short s;	
};

struct B{
	char c;
	int a;
	short s;
};

int main(void)
{
	struct A st;	
	struct B st1;	

	printf("sizeof(struct A)=%d\n",sizeof(struct A));
	printf("sizeof(struct B)=%d\n",sizeof(struct B));

	return 0;
}
