#include <stdio.h>

int main(void)
{

    int a[2][3]={{90,34,12},{37,28,37}};
    int (*p)[3];
    int i,j,n=0,m=0,sum=0;
    p=a;
 
    n=sizeof(a)/sizeof(a[0]);
    m=sizeof(a[0])/sizeof(a[0][0]);
   
    for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
        sum+=*(*(p+i)+j);
   }
    
  printf("sum =%d\n",sum);
  
     return 0;
}

