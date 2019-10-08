#include <stdio.h>

int main (void) {
	
	int a = 10;
	printf("a = 10\n");

	a += 5;
	printf("a += 5 : %d\n", a);

	a = 10; a -= 5+2;
	printf("a -= 5+2 : %d\n", a);

	a = 10; a *= 2+5;
	printf("a *= 2+5 : %d\n", a);

	return 0;
}
