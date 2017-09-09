#include <stdio.h>



int main(void)
{
	char ch;
	int a,b,c;

	while(1)
	{
		printf("请输入一个字母:");
		scanf("%c",&ch);
		getchar();
		if(ch>='A' && ch <='Z')
		{
			a = ch-'A';
			for(b=0;b<=a;b++)
			{
				//打印空格
				for(c=0;c<a-b;c++)
				{
					printf(" ");
				}
				//打印递增部分
				for(c=0;c<=b;c++)
				{
					printf("%c",'A'+c);
				}
				//打印递减部分
				for(c=b-1;c>=0;c--)
				{
					printf("%c",'A'+c);
				}
				printf("\n");
			}
		}
		else
			printf("请输入字母A---Z\n");
	}
	return 0;
}
