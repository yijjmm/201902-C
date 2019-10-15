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
