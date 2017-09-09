#include <stdio.h>

void arr(int num)
{
	int n=1,t=1,m;
	int i;

	for(i=1;i<=num;i++)
	{
		printf("%d\t%d\n",i,n);
		m=n+t;
		n=t;
		t=m;
	}
}

int main(void)
{
	int num;

	printf("请输入你要的数据个数:");
	scanf("%d",&num);
	
	arr(num);
	
	return 0;
}

#if 0
int main(void)
{
	int n=1,t=1,m;
	
	int i,num;

	printf("请输入你要的数据个数:");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		printf("%d\t%d\n",i,n);
		m=n+t;
		n=t;
		t=m;
	}
	
	return 0;
}
#endif
