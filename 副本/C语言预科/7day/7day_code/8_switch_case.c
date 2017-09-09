#include <stdio.h>

enum A{
	red=1,
	white,
	green,
	black,
	blue,
	yellow,
	orange
};

int main(void)
{
	int n;

	while(1)
	{
		scanf("%d",&n);

		switch(n)
		{
			case red:
				printf("today is Monday\n");
				break;
			case white:
				printf("today is Tuesday\n");
				break;
			case green:
				printf("today is Wednesday\n");
				break;
			case black:
				printf("today is Thursday\n");
				break;
			case blue:
				printf("today is Friday\n");
				break;
			case yellow:
				printf("today is Saturday\n");
				break;
			case orange:
				printf("today is sunday\n");
				break;

		}

	}
	return 0;
}
