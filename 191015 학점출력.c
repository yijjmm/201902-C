#include <stdio.h>

int main () {

	int score;

	printf("점수 입력하시오\n");
	scanf("%d", &score);

	if (score >=0 && score <= 100)
		printf("입력한 점수는 %d점 입니다.\n", score);
	else {
		printf("0~100점 사이로 입력하십시오.\n");
		return 0;
	}

	if(0 <= score && score < 60)
		printf("%d점은 F학점입니다.\n", score);

	else if(score < 70)
		printf("%d점은 D학점입니다.\n", score);

	else if(score < 80)
		printf("%d점은 C학점입니다.\n", score);

	else if(score < 90)
		printf("%d점은 B학점입니다.\n", score);

	else if(score <= 100)
		printf("%d점은 A학점입니다.\n", score);
    
    return 0;
}


// #include <stdio.h>

// int main () {

// 	int input;

// 	printf("양수를 입력하시오.\n");
// 	scanf("%d", &input);
		
	
// 	if (input % 2 == 0 && input >= 0)
// 		printf("입력한 수 양수 %d는 짝수입니다.\n", input);
	
// 	else if (input % 2 != 0 && input >= 0)
// 			printf("입력한 수 양수 %d는 홀수입니다.\n", input);

// 	else
// 		printf("입력한 수 %d는 음수입니다.\n", input);

// 	return 0;
// }
