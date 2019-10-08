#include <stdio.h>

int main (void) {

	int a, b, area;
	printf("삼각형의 밑변과 높이의 길이\n");
	scanf_s("%d %d", &a, &b);

	area = a * b / 2;
	printf("삼각형의 넓이는 %d\n", area);

	return 0;

}
