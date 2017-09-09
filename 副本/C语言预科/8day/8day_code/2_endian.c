#include <stdio.h>


int main(void)
{
	unsigned int word=0x12345678;

	unsigned char byte1 = *(unsigned char *)&word;
	unsigned char byte2 = *((unsigned char *)&word+1);
	unsigned char byte3 = *((unsigned char *)&word+2);
	unsigned char byte4 = *((unsigned char *)&word+3);

	printf("%hhx\n",byte1);
	printf("%hhx\n",byte2);
	printf("%hhx\n",byte3);
	printf("%hhx\n",byte4);

	return 0;
}
