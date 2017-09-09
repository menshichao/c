#include <stdio.h>


int main(void)
{
    int a[5]={1,2,3,4,5};
    int *p[5]={a,a+1,a+2,a+3,a+4};

    int **pa=p;
    int i;
    for(i=0;i<5;i++)
     //  printf("a[%d] = %d\n",i,*pa[i]);
 //      printf("a[%d] = %d\n",i,*(*pa+i));
         printf("a[%d] = %d\n",i,**(pa+i));
  

#if 0
    int i;
    for(i=0;i<5;i++)
         printf("a[%d]=%d\n",i,*p[i]);  
   
#endif
    
    
    



     return 0;
}
