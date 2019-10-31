#include<stdio.h>

int main(void){
	int i, n, sum = 0;

	printf("숫자를 입력하시오\n");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
		sum += i;

	printf("sum 1~n : %d", sum);

	return 0;
}
