#include <stdio.h>

int sq(int a, int b);

int main(void){

	int a, b, result;

	printf("a의 b거듭제곱?\n");
	scanf("%d %d", &a, &b);

	result = sq(a, b);

	printf("결과 : %d\n", result);

	return 0;
}

int sq(int a, int b)
{
	int i;
	int A = 1;
	for(i=0; i<b; i++){
		A = A * a;
	}
	return A;
}
