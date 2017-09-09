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
	struct student st;
	//不能整体赋值，要逐个元素赋值
//	st={1001,"qiantai","girl",80,158};//error

	st.num = 1003;
	//数组赋值不能整体赋值
	strcpy(st.name,"lisha");
	strcpy(st.sex,"girl");
	st.weight = 95;
	st.high = 168;

	printf("%d\t%s\t%s\t%.2f\t%.2f\n",st.num,st.name,st.sex,st.weight,st.high);

	return 0;
}
