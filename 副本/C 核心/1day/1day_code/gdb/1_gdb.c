#include <stdio.h>


void fun()
{
     int i;

     for(i=0;i<5;i++)
        printf("a[%d]=%d\n",i,i);

}



int main(void)
{

    int i;
     
    fun();
    for(i=0;i<5;i++)
        printf("b[%d]= %d\n",i,i);
    
     return 0;
}

