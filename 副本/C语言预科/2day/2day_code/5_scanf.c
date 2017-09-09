#include <stdio.h>


int main(void)
{
	int n,m,ret;
	float f;
	double d;
	
	ret=scanf("%f%lf",&f,&d);
	printf("f=%.2f\td=%.2f\n",f,d);
	printf("ret=%d\n",ret);

#if 0
	scanf("%d%d",&n,&m);
	
	printf("n=%d\tm=%d\n",n,m);
#endif
	return 0;
}
