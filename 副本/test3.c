#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "Hello";
	char str2[20] = "World";

	int strlen1 = strlen(str1),strlen2 = strlen(str2);//分别获取str1和str2的字符数组长度
	char str3[20];// = "\0";//声明并定义存放str1和str2内容的字符数组
	char (*pc)[20];
	pc = &str3;//数组指针，指向的是数组的地址，而不是数组元素，如pc = str3 = &str3[0]
	int i,j;
	for(i = 0; i < strlen1; i++)
		*(*pc+i) = str1[i];
	for(j = 0; j < strlen2; j++)
		*(*pc+i+j) = str2[j];
//	printf("str1的长度是%d，str2的长度是%d\n",strlen1,strlen2);
	printf("%s\n",str3);	
	return 0;
}
