#include <stdio.h>

//枚举中成员以及自己本身都默认为int
enum color_wolf{
	 red,
	 blue=5,//成员若没有赋值，则值为前面成员值加1
	 green=2,
	 yellow
};

int main(void)
{

	printf("%d\n",sizeof(enum color_wolf));

	printf("red = %d\n",red);
	printf("blue = %d\n",blue);
	printf("green = %d\n",green);
	printf("yellow = %d\n",yellow);

	return 0;
}
