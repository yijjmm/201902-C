#include <stdio.h>

int main (void) {
	
	int lastmask = 1; //2^0 위치 : 00000001
	int firstmask = 128; //2^7 위치 : 10000000
	
	int input;

	printf("0~255 사이 중 짝수 입력\n");
	scanf("%d", &input);

	printf("%d의 첫번째 비트는 %d\n", input, input&firstmask);
	printf("%d의 첫번째 비트 값을 바꾸면 %d\n", input, input^firstmask);
	//when input = 1xxxxxxx or 0xxxxxxx,
	//1xxxxxxx ^ 10000000 = 0xxxxxxx = input - 128
	//0xxxxxxx ^ 10000000 = 1xxxxxxx = input + 128
	
	
	printf("%d의 마지막 비트 값을 바꾸면 %d\n", input, input|lastmask);
	//xxxxxxx1 ^ 00000001 = xxxxxxx0 = input - 1
	//xxxxxxx0 ^ 00000001 = xxxxxxx1 = input + 1

	return 0;
}
