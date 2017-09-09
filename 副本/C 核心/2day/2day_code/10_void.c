#include <stdio.h>

int main(void)
{

    void *p;
 #if 0
    char a = 'A';
    p=&a;
    printf("a =%c\n",*(char *)p);
 #endif

#if 0
    float b = 100;
    p=&b;
    printf("b = %.2f\n",*(float *)p);
#endif

    int c=200;
    int *pa = &c;
    p=&pa;
    printf("c =%d\n",**(int **)p);
  

     return 0;
}



