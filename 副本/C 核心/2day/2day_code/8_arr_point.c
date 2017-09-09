#include <stdio.h>



int main(void)
{
    int a[5]={1,2,3,4,5};
    int (*p)[5];
    int i;

    p = &a;
    for(i=0;i<5;i++)
    printf("a[%d]=%d\n",i,*(*(p+0)+i));   
 
     return 0;
}
