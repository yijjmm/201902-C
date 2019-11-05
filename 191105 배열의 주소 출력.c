#include <stdio.h>

int main(void){
	
	int a[4] = {10, 20, 30, 40};
	int i, L;

	L = sizeof(a)/sizeof(int);

	printf("배열의 원소 값 출력\n");
	for (i=0; i<L; i++){
		printf("a[%d] = %d\n", i, a[i]);

	}
	printf("\n");

	printf("배열 원소의 주소 출력\n");
	for (i=0; i<L; i++){
		printf("&a[%d] = %p\n", i, &a[i]);
	}

	return 0;

}
