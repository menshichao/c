#include <stdio.h>


//void show(int n,int m[])
void show(int n,int *m)
{
    int i;

    for(i=0;i<n;i++)
             printf("m[%d] = %d\n",i,m[i]);

}

//void fun(int n, int m[])
void fun(int n, int *m)
{
    int i;

    for(i=0;i<n;i++)
        m[i]=5*m[i];

}

int main(void)
{
    int a[5]={1,2,3,4,5};
  
    show(5,a);
    fun(5,a);
    printf("\n");
    show(5,a);

    return 0;
}
