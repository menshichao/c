#include <stdio.h>

// & *
int main()
{
      int a=16;
      int *p=&a;

      printf("a = %d\n",a);
      printf("p = %p\n",p);
 
      printf("&a = %p\n",&a);
      printf("*p = %d\n",*p);
     
      printf("*&a = %d\n",*&a);
      printf("*&p = %p\n",*&p);
 
 //     printf("&*a = %d\n",&*a);
      printf("&*p = %p\n",&*p);

      return 0;
}



