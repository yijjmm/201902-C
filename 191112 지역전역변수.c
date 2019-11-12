#include <stdio.h>

int gVal = 1;

void A(){
	int value = 20;
	gVal++;
}

int main(void){
	int value = 10;
	printf("지역변수 value 값은 %d이다.\n", value);
	printf("전역변수 gVal 값은 %d이다.\n", gVal);

	A();

	printf("함수 A() 실행 후\n");
	printf("지역변수 value 값은 %d이다.\n", value);
	printf("전역변수 gVal 값은 %d이다.\n", gVal);

	return 0;
}

