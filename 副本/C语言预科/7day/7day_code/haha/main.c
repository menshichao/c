#include <stdio.h>

extern int fun(int n,int m);
extern void show(int sum);

int main(void)
{
	int a,b;
	int ret;
	scanf("%d%d",&a,&b);
//	ret=fun(a,b);

//	show(ret);

	show(fun(a,b));

	return 0;
}
