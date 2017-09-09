#include <stdio.h>

void Project01_LetterPrint(void)
{
	char str[100];
	int i = 0,error_flag = 0;
	printf("请输入一行小写字母(不要包含z):");
	scanf("%s",str);

	while(str[i]!='\0')
	{
		if((str[i]>='a')&&(str[i]<='y'))
		{
			str[i] = str[i] + 1;
		}
		else
		{
			error_flag = 1;
			printf("输入有误(可能包含其他符号或z)\n");
		}
		i++;
	}
	if(error_flag!=1)
		printf("%s\n",str);

}

void Project02_OutputFlowerNum(void)
{
	int num;
	int ge,shi,bai;
	printf("100-1000范围内的水仙花数有：");
	for(num=100;num<=1000;num++)
	{
		ge = num % 10;
		shi = num % 100 /10;
		bai = num% 1000 / 100;
		if(((ge*ge*ge)+(shi*shi*shi)+(bai*bai*bai))==num)
		{
			bai = shi = ge = 0;
			printf("%d ",num);
		}
	}
	printf("\n");
}


void Project03_ForSum(void)
{
	float sum = 0.0;
	int n = 1;
	for(n = 1;n<=20;n++)
	{
		sum += 1.0/(n*(n+1));
	}

	printf("1/(1*2)+1/(2*3)+1/(3*4)+...前50项之和为:%f\n",sum);
}

void Project04_InArrayForMax(void)
{
	int array[3][4];
	int i,j,k;
	int max,temp;
	printf("请为3*4矩阵输入12个整数：");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	printf("-----------------before-----------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		max = array[i][0];
		for(j=1;j<4;j++)
		{
			if(array[i][j]>max)
			{
				max = array[i][j];
				k = j;
			}
		}
		temp = array[i][0];
		array[i][0]=max;
		array[i][k]=temp;
	}
	printf("-----------------after------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",array[i][j]);
		}	
		printf("\n");
	}
}
int Project05_InvertedOrder()
{
	int Num;
	int temp_num = 0;
	printf("请输入一个整数(三位):");
	scanf("%d",&Num);
	if(Num < 0)
	{
		printf("输入的这串数格式不对！！！\n");
		return 0;
	}
	while(Num/10)
	{
		temp_num = Num % 10;
		printf("%d",temp_num);
		Num = Num / 10;
	}
	printf("%d\n",Num);	
}

void Project06_TriangleArea(void)
{
	int bottom,high;
	float area;
	printf("请输入三角形的底和高:");
	scanf("%d %d",&bottom,&high);
	area = (float)1.0/2*bottom*high;
	printf("三角形面积为%.2f\n",area);
}
	
void Project07_Print_C(void)
{	
	//字母'C'的8*8点阵
	unsigned char c_table[8] = {0xff,0xc3,0xbd,0xfd,0xfd,0x79,0x83,0xff};
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if((c_table[i]&0x01)==0x00)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			c_table[i] = c_table[i]>>1;
		}
		printf("\n");
	}

}

int main(void)
{
	int input_num;
	while(1)
	{
		printf("请输入题号(输入8结束)：");
		scanf("%d",&input_num);
		switch(input_num)
		{
			case 1:Project01_LetterPrint(); break;
			case 2:Project02_OutputFlowerNum();break;
			case 3:Project03_ForSum();break;
			case 4:Project04_InArrayForMax();break;
   			case 5:Project05_InvertedOrder();break;
			case 6:Project06_TriangleArea();break;
			case 7:Project07_Print_C();break;
			case 8:
			{
				printf("再见！！\n");	
				return 0;
			}
			default:break;
		}
	}

}
