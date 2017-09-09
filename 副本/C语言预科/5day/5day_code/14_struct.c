#include <stdio.h>
#include <string.h>

struct student
{
	int num;
	char name[20];
	char sex[10];
	float weight;
	float high;
};


int main(void)
{
	struct student st1={1001,"zhaoliying","woman",150,150};
	//同种类型间的结构体可以相互整体赋值
	struct student st;

	st=st1;

	printf("%d\t%s\t%s\t%.2f\t%.2f\n",st.num,st.name,st.sex,st.weight,st.high);

	return 0;
}
