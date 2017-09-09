#include <stdio.h>



int main(void)
{
	int i;
	//完全初始化
	char str[10]={'H','e','l','l','o','w','o','r','l','d'};
	char str1[]={'H','e','l','l','o','w','o','r','l','d'};
	char str2[10]="hellogirl";
	char str3[]="hellogirl";
	char str4[10]={"hellogirl"};
	char str5[]={"hellogirl"};
	//部分初始化:按照数组下标依次给前面的元素赋值，没有的默认为'\0'
	char str6[10]={'H','e','l','l','o'};
	char str7[10]="hey";
	//指定初始化
	char str8[10]={[5]='Q',[6]='X'};

//	printf("%s\n",str1);
	for(i=0;i<10;i++)
	{
//		printf("i=%d %c\n",i+1,str8[i]);
		printf("i=%d %c\n",i+1,str8[i]);
	}
//	printf("\n");
	for(i=0;i<10;i++)
	{
		printf(" %c\n",str6[i]);
	}
	printf("*********************\n");
	printf("\n");


	return 0;
}
