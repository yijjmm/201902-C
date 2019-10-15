#include <stdio.h>

int main () {

	int input;

	printf("영어로 인사하기\n");
	printf("아침인사-1, 점심인사-2, 저녁인사-3\n");
	scanf("%d", &input);

	switch(input){
	case 1 :
		printf("Good morning\n");
		break;

	case 2:
		printf("Good afternoon\n");
		break;

	case 3:
		printf("Good evening\n");
		break;
	default : 
		printf("잘못 입력하였습니다\n");
		break;
	}

	return 0;
}
