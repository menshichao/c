#include <stdio.h>

#define DEBUG

int main(void)
{

#ifdef DEBUG
	printf("hello boy\n");
#else
	printf("hey man\n");
#endif
	return 0;
}

#if 0
int main(void)
{

#if 1
	printf("hello girl");
#else
	printf("hello young woman\n");
#endif

	return 0;
}
#endif
