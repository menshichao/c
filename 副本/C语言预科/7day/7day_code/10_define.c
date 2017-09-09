#include <stdio.h>

void fun()
{
	printf("%d\n",__LINE__);//打印行数
	printf("%s\n",__FILE__);//打印当前所在文件
	printf("%s\n",__DATE__);//打印当前日期
	printf("%s\n",__TIME__);//打印当前时间
	printf("%s\n",__func__);//打印当前所在函数
	printf("%d\n",__STDC__);//判断当前C是否满足美国标准，若满足则打印1，否则打印0

}

int main(void)
{
	fun();
	//预定义宏
	printf("%d\n",__LINE__);//打印行数
	printf("%s\n",__FILE__);//打印当前所在文件
	printf("%s\n",__DATE__);//打印当前日期
	printf("%s\n",__TIME__);//打印当前时间
	printf("%s\n",__func__);//打印当前所在函数
	printf("%d\n",__STDC__);//判断当前C是否满足美国标准，
				//若满足则打印1，否则打印0

	return 0;
}
