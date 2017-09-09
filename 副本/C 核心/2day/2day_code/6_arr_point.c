#include <stdio.h>


int main(void)
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    int i,j;

    int (*p)[3];
    p=arr;

    for(i=0;i<2;i++)
    {
         for(j=0;j<3;j++)
             printf("arr[%d][%d]=%d\n",i,j,*(*(p+i)+j));
   }

#if 0
    for(i=0;i<3;i++)
      //  printf("arr[0][%d]=%d\n",i, *p[i]); //error
    //     printf("arr[0][%d]=%d\n",i, *(*p+i));
         printf("arr[0][%d]=%d\n",i, *(*(p+1)+i));
#endif  

#if 0
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
           printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
    }
#endif


     return 0;
}




