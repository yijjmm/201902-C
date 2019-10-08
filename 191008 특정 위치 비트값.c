#include <stdio.h>

int main (void) {
	
	unsigned char lastmask = 1; //2^0 위치 : 00000001
	unsigned char firstmask = 128; //2^7 위치 : 10000000
	unsigned char input;

	printf("값 입력\n");
	scanf("%d", &input);

	printf("%d의 첫번째 비트는 %d\n", input, input&firstmask);
	printf("%d의 마지막 비트는 %d\n", input, input&lastmask);

	return 0;
}
