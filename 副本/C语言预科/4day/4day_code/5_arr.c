#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];

	int i;
	//赋值:逐个元素赋值
	strcpy(str,"hellogirl");

	printf("%s\n",str);
#if 0
	for(i=0;i<10;i++)
	//	str[i]='A'+i;
		scanf("%c",&str[i]);
	for(i=0;i<10;i++)
		printf("%c",str[i]);
	printf("\n");
#endif
	return 0;
}
