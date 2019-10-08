#include <stdio.h>

int main (void) {

	int a, b, c;
	a = 10; b = 20; c = 30;

	a = ++b;

	c = b++;
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	a = ++b + ++c;
	printf("a = ++b + ++c 문장 실행 후\n");
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	a = b++ + c++; //되도록이면 a = b + c; b++; c=++; 로 쓸 것
	printf("a = b++ + c++ 문장 실행 후\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;

}
