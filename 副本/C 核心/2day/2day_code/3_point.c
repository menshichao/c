#include <stdio.h>


int main(void)
{
     int a=55;
     int *p1=&a;
     int **p2=&p1; 
     int ***p3=&p2; 
     int ****p4=&p3; 
      

   
     printf("*p1=%d\n",*p1);
     printf("**p2=%d\n",**p2);
     printf("***p3=%d\n",***p3);
     printf("****p4=%d\n",****p4);


     return 0;
}


