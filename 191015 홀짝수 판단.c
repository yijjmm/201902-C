#include <stdio.h>

int main () {

	int input;

	printf("양수를 입력하시오.\n");
	scanf("%d", &input);

	if (input >= 0){
		if (input % 2 == 0)
			printf("입력한 수 %d는 짝수입니다.\n", input);
		else
			printf("입력한 수 %d는 홀수입니다.\n", input);
	}
	else{
		printf("입력한 수 %d는 음수입니다.\n", input);
	}

	return 0;
}
