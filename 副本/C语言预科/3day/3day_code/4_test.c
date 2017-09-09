#include <stdio.h>


int main(void)
{
	int num;
	while(1)
	{
		scanf("%d",&num);
		getchar();
		if(1==num)
			printf("今天星期一\n");
		else if(2==num)
			printf("今天星期二\n");
		else if(num==3)
			printf("今天星期三\n");
		else if(num==4)
			printf("今天星期四\n");
		else if(num==5)
			printf("今天星期五\n");
		else if(num==6)
			printf("今天星期六\n");
		else if(num==7)
			printf("今天星期天\n");
		else
			printf("笨蛋 星期都输不对吗?\n");

	}

	return 0;
}
