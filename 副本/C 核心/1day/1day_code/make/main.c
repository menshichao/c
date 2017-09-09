#include <stdio.h>

extern void show(int sum);
extern int add(int a,int b);

int main(void)
{

     int a,b;
 
     scanf("%d%d",&a,&b);

     show(add(a,b));

     return 0;
}
