#include <stdio.h>


int main(void)//返回值类型为int并且不带参的主函数
{//左右大括号各占一行
	int num;//定义一个整型变量
	char *pstring="hello world";//初始化

	for(num=1;num<7;num++)//for循环
	{
		printf("num=%d %s\n",num,pstring);//循环体
	}

	return 0;
}
