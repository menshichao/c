#include <stdio.h>

#if 0
//与类型同时定义
struct student{
	int num;
	char name[20];
	char sex[10];
	int age;
	float high;
	double weight;
}st;

//直接定义
struct {
	int num;
	char name[20];
	char sex[10];
	int age;
	float high;
	double weight;
}st;
#endif

//常规定义
struct student{
	int num;
	char name[20];
	char sex[10];
	int age;
	float high;
	double weight;
};

int main(void)
{
	//完全初始化:按照顺序给所有成员赋值
//	struct student st={1001,"xiaosan","woman",18,170,90};
	//部分初始化:按照顺序给前面的部分成员赋值
//	struct student st={1002,"hengwei"};	
	//指定初始化：对指定的成员赋值
	struct student st={.num=1003,.weight=180,.sex="man"};

	printf("%d\t%s\t%s\t%d\t%.2f\t%.2f\n",st.num,st.name,st.sex,st.age,st.high,st.weight);

	return 0;
}
