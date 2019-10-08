#include <stdio.h>

int main (void) {

	int a = 0, b = 1;

	printf("%d\n", 1&&2);
	printf("%d\n\n", 0&&2);

	printf("%d\n", 0||2);
	printf("%d\n\n", 0||0);

	printf("%d\n", !a);
	printf("%d\n", !b);

	return 0;

}
