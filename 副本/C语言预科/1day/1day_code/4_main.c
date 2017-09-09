#include <stdio.h>


//argc 表示命令行输入的个数
//argv 表示命令行的命令
int main(int argc,char *argv[])
{
	int i;

	for(i=0;i<argc;i++)
	{
		printf("%s\t",argv[i]);
	}

	printf("\n");

	return 0;
}
