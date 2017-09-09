#include <stdio.h>

#define HOUR 60

int main(void)
{
	int n;
	int hour,min;

	printf("请输入你要的分钟数:");
	scanf("%d",&n);
	printf("分钟数%d可以表示为%d小时%d分钟\n",n,n/HOUR,n%HOUR);
#if 0
	hour=n/HOUR;
	min=n%HOUR;

	printf("分钟数%d可以表示为%d小时%d分钟\n",n,hour,min);
#endif
	return 0;
}
