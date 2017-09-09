#include <stdio.h>


struct student 
{
	int num;
	char name[20];
	float high;
	float weight;
};

int main(void)
{
	//结构体数组：元素为结构体的数组
	struct student st[5];
	int i;

	for(i=0;i<5;i++)
		scanf("%d%s%f%f",&st[i].num,st[i].name,&st[i].high,&st[i].weight);

	for(i=0;i<5;i++)
		printf("%d\t%s\t%.2f\t%.2f\n",st[i].num,st[i].name,st[i].high,st[i].weight);

	return 0;
}
