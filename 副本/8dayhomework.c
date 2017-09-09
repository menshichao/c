#if 0
//1. 编程，统计在所输入的50个实数中有多少个正数、多少个负数、多少个零。

#include<stdio.h>

int main (void)
{
	int i;
	int x=0;
	int y=0;
	int z=0;
	float a[5];

	printf("请输入50个实属数:");
	for(i=0;i<5;i++)
		scanf("%f",a+i);


	for(i=0;i<5;i++)
	{
		if(a[i]>0)
			x=x+1;
		else if(a[i]<0)
			y=y+1;
		else if(a[i]==0)
			z=z+1;
	}

	printf("%d\t%d\t%d\n",x,y,z);

	return 0;
}




//   2. 编程，计算并输出方程X2+Y2=1989的所有整数解。

#include<stdio.h>

int main (void)
{
	int a,b;
	//	int x=0;
	//	int t[100];


	for(a=1;a<50;a++)
	{	for(b=1;b<50;b++)
		{
			if(a*a+b*b==1989)
			{
				//			t[x]=a;
				//			t[x+1]=b;
				//			X++;

				printf("%d\t%d\n",a,b);
			}
		}

	}

	//         for(a=0;a<x;a=a+2)
	//		printf("%d\t%d\n",t[a],t[a+1]);




	return 0;
}


//3. 编程，输入一个10进制正整数，然后输出它所对应的八进制、十六进制数。

#include<stdio.h>

int main (void)
{
	int a;

	printf("请输入一个10进制正整数:");
	scanf("%d",&a);

	printf("其对应的八进制数为:%o\nt其对应的十六进制数为:%x\n",a,a);



	return 0;
}



// 4. 一个数如恰好等于它的因子之和，这个数就称为“完数”。编程序找出1000以内的所有完数，并输出其因子（6是一个"完数"，它的因子是1,2,3）。【未完成】


#include<stdio.h>

int main(void)
{

	int i,j,n,m,sum,y=100;
	int x[y];


	for(n=1000;n>0;n--)
	{
		i=0;
		sum=0;	
		for(m=1;m<n;m++)
		{
			if(n%m==0)
			{
				sum+=m;
				x[i]=m;
				i++;
			}
		}
		if(sum==n)
		{	printf("完数：%d\n",n);
			for(j=0;j<i;j++)
				printf("此玩数的因子为：%d\t",x[j]);
			printf("\n");
		}
	}

	return 0;
}



//5.正整数，输出它的所有质数因子（如180的质数因子为 2、2、3、3、5）。

//gcc报错：
//8dayhomework.c: In function ‘main’:
8dayhomework.c:137:3: warning: this decimal constant is unsigned only in ISO C90 [enabled by default]


#include<stdio.h>

int main (void)
{
	int n,i;

	while(1)
	{	

		printf("请输入一个正整数(输入0-exit):");
		scanf("%d",&n);

		if(n>0&&n<4294967295)
		{
			printf("此正整数的因子：");
			for(i=2;i<n;i++)
			{
				if(n%i==0)
					printf("%d\t",i);
			}
			printf("\n");
		}
		else if(n==0)
			return 0;
		else
			printf("输入错误。\n");

	}
	return 0;
}



//6. 输入20个整数存入一数组，输出其中能被数组中其它元素整除的那些数组元素。

#include<stdio.h>


int main(void)
{
	int a[20];
	int i,j,n;	

	while(1)
	{

		printf("输入1选择进入程序；输入2选择退出程序.");
		scanf("%d",&n);


		switch(n)
		{
			case 1:
				{
					printf("请输入20个整数：");

					for(i=0;i<20;i++)
						scanf("%d",a+i);

					printf("这20个整数中可以被其它元素整除的元素为:");

					for(i=0;i<20;i++)
					{
						for(j=0;j<20;j++)
						{	if(i==j)
							continue;
							else if (a[i]%a[j]==0)
							{	
								printf("a[%d]%d\t",i,a[i]);
								break;
							}
						}
					}

					printf ("\n");
					break;
				}
			case 2:
				return 0;
			default:
				printf("输入错误。");
		}
	}
	return 0;
}


#endif

//7. 输入两个数组（数组元素个数自定），输出在两个数组中都出现的元素（如a[5]={2,3,4,5,6}，b[6]={3,5,7,9,10,-1}，则输出3、5）。


#include<stdio.h>


int main(void)
{

	int i,j;
	int a[5]={2,3,4,5,6};
	int b[6]={3,5,7,9,10,-1};
		
	for(i=0;i<sizeof(a[5]);i++)	
	{
		for(j=0;j<sizeof(b[6]);j++)
		{
			if	

		}

	
	}
	return 0;
}
































