#include <stdio.h>

int main(void)
{
   int a[5]={1,2,3,4,5};
   int i;
   int *p=a;

    for(i=0;i<5;i++)
        printf("p[%d]=%d p[%d]=%d\n",i,p[i],i,*(p+i));
    


    return 0;
}
