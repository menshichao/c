#include <stdio.h>
#include <string.h>

#if 0

//与类型同时定义
union student{
	int num;
	char name[20];
	float weight;
	float high;
}st;

//直接定义
union {
	int num;
	char name[20];
	float weight;
	float high;
}st;
#endif

//常规定义
union student
{
	int num;
	char name[20];
	float weight;
	float high;
};


int main(void)
{
	//联合体：所有成员共用一块内存，赋值以最后一次为准
	//联合体的大小：取决与成员中的最大值并且要满足地址对齐
	union student st;

	printf("%d\n",sizeof(st));
	printf("%d\n",sizeof(union student));

	st.num = 1001;
	strcpy(st.name,"xiaosan");
	st.weight = 95;
	st.high = 168;
	printf("st.num = %d\n",st.num);
	printf("st.name = %s\n",st.name);
	printf("st.weight = %f\n",st.weight);
	printf("st.high = %f\n",st.high);
	printf("**************^_^********************\n");
	st.num = 1001;
	strcpy(st.name,"xiaosan");
	st.high = 168;
	st.weight = 95;
	printf("st.num = %d\n",st.num);
	printf("st.name = %s\n",st.name);
	printf("st.weight = %f\n",st.weight);
	printf("st.high = %f\n",st.high);
	printf("**************^_^********************\n");
	st.num = 1001;
	st.high = 168;
	st.weight = 95;
	strcpy(st.name,"xiaosan");
	printf("st.num = %d\n",st.num);
	printf("st.name = %s\n",st.name);
	printf("st.weight = %f\n",st.weight);
	printf("st.high = %f\n",st.high);
	printf("**************^_^********************\n");
	st.high = 168;
	st.weight = 95;
	strcpy(st.name,"xiaosan");
	st.num = 1001;
	printf("st.num = %d\n",st.num);
	printf("st.name = %s\n",st.name);
	printf("st.weight = %f\n",st.weight);
	printf("st.high = %f\n",st.high);
	printf("**************^_^********************\n");



	return 0;
}
