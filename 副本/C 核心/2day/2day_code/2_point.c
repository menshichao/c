#include <stdio.h>


int main(void)
{
    int a=16;
    int *pa=&a;
 
     printf("sizeof(a) = %d\n",sizeof(a));
     printf("sizeof(pa) = %d\n",sizeof(pa));
     
     long long b =66;
     long long *pb=&b;
     printf("sizeof(b) = %d\n",sizeof(b));
     printf("sizeof(pb) = %d\n",sizeof(pb));
    

     float c =166;
     float *pc=&c;
     printf("sizeof(c) = %d\n",sizeof(c));
     printf("sizeof(pc) = %d\n",sizeof(pc));

     double d =266;
     double *pd=&d;
     printf("sizeof(d) = %d\n",sizeof(d));
     printf("sizeof(pd) = %d\n",sizeof(pd));




     return 0;
}

