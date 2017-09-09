#include <stdio.h>
#include <unistd.h>

#if 1
int main(void)
{
	int i=10;

	//先判断后执行
	while(i<5)
	{
		printf("hahaha ma shang xie ke le \n");
		i++;
		sleep(1);
	}

	return 0;
}
#endif

#if 0
int main(void)
{
	int i=10;
	//先执行后判断，至少执行一次
	do
	{
		printf("hello world\n");
		i++;
	}while(i<5);


	return 0;
}
#endif
