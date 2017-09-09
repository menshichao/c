#include <stdio.h>


void fun(int *p)
{
#if 0
   *p = 88;

#else
   int b =99;
   p = &b;
       
    printf("fun *p = %d\n",*p);
    printf("fun p = %p\n",p);

#endif
}


void fun2(int **p)
{
   int b = 199;
   *p = &b;
}

int main(void)
{
    int a = 77;
    int *p = &a;

    printf("*p = %d\n",*p);
    printf("p = %p\n",p);
 
   // fun(p);
    fun2(&p);

    printf("*p = %d\n",*p);
    printf("p = %p\n",p);

     return 0;
}
