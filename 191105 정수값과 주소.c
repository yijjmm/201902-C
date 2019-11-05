#include <stdio.h>

int main(void){
	
	int a;
	printf("정수 값 1개 입력\n");
	scanf("%d", &a);

	printf("정수의 값(a)은 %d\n", a);
	printf("정수의 주소(&a)는 %d\n", &a);

	return 0;

}
