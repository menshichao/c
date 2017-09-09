#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int *p,i;

	p = (int *)calloc(1,sizeof(int));	
//	p = (int *)calloc(5,4);	
	if(NULL == p)
	{
		perror("calloc failed");
		exit(1);
	}
	*p = 20;

	printf("*p=%d\n",*p);
#if 0
	for(i=0;i<5;i++)
		scanf("%d",(p+i));

	for(i=0;i<5;i++)
		printf("%d\t",p[i]);
	printf("\n");
#endif
	return 0;
}
