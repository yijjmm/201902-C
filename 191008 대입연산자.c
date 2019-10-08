#include <stdio.h>

int main (void) {
	int a, b = 0;

	a = 4;
	printf("a = 4 문장 실행한 후 a의 값은 %d\n", a);

	a = a + 3;
	printf("a = a + 3 문장 실행한 후 a의 값은 %d\n", a);

	b = a + 2;
	printf("b = a + 2 문장 실행한 후 b의 값은 %d\n", b);

	return 0;

}
