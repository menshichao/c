#include <stdio.h>

int fun(int n,int m)
{
	return n+m;
}

void show(int d)
{
	printf("%d\n",d);
}

int main(void)
{

	int a,b;
	int ret;

	scanf("%d%d",&a,&b);

	ret=fun(a,b);
	show(ret);

	return 0;
}


#if 0
int main(void)
{
	int n,m;
	int sum;

	scanf("%d%d",&n,&m);
	sum = n+m;
	printf("sum=%d\n",sum);


	return 0;
}
#endif
