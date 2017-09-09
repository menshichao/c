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

	struct student st={1001,"qiangge",175,135};
	//结构体指针：指向结构体的指针
	struct student *ps;

	ps = &st;
	printf("%d\t%s\t%.2f\t%.2f\n",ps->num,ps->name,ps->high,ps->weight);
	printf("%d\t%s\t%.2f\t%.2f\n",(*ps).num,(*ps).name,(*ps).high,(*ps).weight);

	return 0;
}
