#include <stdio.h>


void fun(int n, int m, int (*b)[m])
{
    int i,j;

    for(i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
          printf("b[%d][%d] = %d\n",i,j,b[i][j]);
   }      


}


int main()
{
     int a[2][3]={{1,2,3},{4,5,6}};
 //    int (*p)[3]=a;
     
  //    fun(2,3,p);
       fun(2,3,a);


       return 0;
}
