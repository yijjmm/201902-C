#include <stdio.h>

int main (void) {
	
	int a = 0, b = 1, c = 1;

	printf("%d\n", a < b && c > a);
	
	printf("%d\n", a > b && c > a);

	printf("%d\n\n", a > b || c > a); // (a>b) || (c>a) 로 표현 가능

	return 0;
}
