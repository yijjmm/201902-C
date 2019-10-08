#include <stdio.h>

int main (void) {
	
	int a, b, c, d;
	int x = 10, y = 7;

	a = x & y;
	b = x | y;
	c = x ^ y;
	d = ~x;

	printf("x & y = %d\n", a);
	printf("x | y = %d\n", b);
	printf("x ^ y = %d\n", c);
	printf("~x = %d\n", d);

	return 0;
}
