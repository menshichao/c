#include <stdio.h>

int main(void)
{
	int n,m;
	int max;

	scanf("%d%d",&n,&m);
	if(n>m)
		max=n;
	else
		max=m;

	printf("max=%d\n",max);

	int a,b,c;

	scanf("%d%d",&a,&b);
	if(a>b)
		c=a;
	else
		c=b;

	printf("c=%d\n",c);

	return 0;
}
