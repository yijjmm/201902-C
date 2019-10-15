#include <stdio.h>

int main () {

	int max, min, x, y;

	printf("x와 y를 입력하시오.\n");
	scanf("%d %d", &x, &y);

	max = (x > y) ? x : y;
	min = (x > y) ? y : x;

	printf("두 수 %d와 %d 중에 큰 수는 %d이다.\n", x, y, max);
	printf("두 수 %d와 %d 중에 작은 수는 %d이다.\n", x, y, min);

	return 0;
}
