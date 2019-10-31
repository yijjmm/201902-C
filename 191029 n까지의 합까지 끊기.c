#include<stdio.h>

int main(void){

	int a = 1, sum = 0;

	while (sum < 300){
		sum += a;
		a++;
	}

	printf("합이 300이 넘는 a의 최솟값은 %d이다.\n", a-1);
	printf("sum = %d\n", sum);

	return 0;
}
