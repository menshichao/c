#include <stdio.h>

struct student{
	int sno;
	char name[20];
	float score;
};
//菜单
void menu()
{
	printf("1:输入   2:查询   3:退出\n");
}

void init(int n,struct student stu[])
{
	int i;

	for(i=0;i<n;i++)
		stu[i].sno = 0;
}

//输入
#if 1
int insert(struct student stu[] )
{
	int i,n;
	printf("您要输入几个学生信息:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%s%f",&stu[i].sno,stu[i].name,&stu[i].score);
	
	return n;
}
#else
void insert(int *n,struct student stu[] )
{
	int i;
	printf("您要输入几个学生信息:");
	scanf("%d",n);
	for(i=0;i<(*n);i++)
		scanf("%d%s%f",&stu[i].sno,stu[i].name,&stu[i].score);
	
}
#endif
//显示
void show(struct student stu[])
{
	int i;

	for(i=0;stu[i].sno!=0;i++)
		printf("%d\t%s\t%.2f\n",stu[i].sno,stu[i].name,stu[i].score);
	printf("\n");
}
#if 0
void show(int n,struct student stu[])
{
	int i;

	for(i=0;i<n;i++)
		printf("%d\t%s\t%.2f\n",stu[i].sno,stu[i].name,stu[i].score);
	printf("\n");
}
#endif
int main(void)
{
	int n,ret;

	struct student st[60];
	init(60,st);
	while(1)
	{
		menu();
		printf("请选择:");
		scanf("%d",&n);

		if(1==n)
			insert(st);
//			insert(&ret,st);
		else if(2==n)
			show(st);
		else if(3==n)
			return 0;
	}

	return 0;
}






#if 0
int main(void)
{
	int n,num,i;
	struct student st[60];

	while(1)
	{
		printf("1:输入   2:查询   3:退出\n");
		printf("请选择:");
		scanf("%d",&n);

		switch(n)
		{
			case 1:
				printf("您要输入几个学生信息:");
				scanf("%d",&num);
				for(i=0;i<num;i++)
					scanf("%d%s%f",&st[i].sno,st[i].name,&st[i].score);
				break;
			case 2:
				for(i=0;i<num;i++)
					printf("%d\t%s\t%.2f\n",st[i].sno,st[i].name,st[i].score);
				break;
			case 3:
				return 0;
		}
	}
	return 0;
}
#endif
