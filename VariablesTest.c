#include <stdio.h>

int main(void)
{
	int x= 50;
	float y = 123456789.123456789;
	double z = 1213456789.123456789;
	printf("x=%d \n", x);
	printf("y=%.2f \n", y);
	printf("z=%.9f \n", z);
	return 0;
}
