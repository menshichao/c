#include <stdio.h>


int main(void)
{

    char str[]="hello";
//    str[0]='H';
    *str='L';

     char *p="farsight";
//     *p='F';

    printf("%s\n",str);
    printf("%s\n",p);

    return 0;
}
