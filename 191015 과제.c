//a, b를 입력받고, a>=80 통과, b>=60 통과 with if / else if

#include <stdio.h>

int main () {

	char type;
	int score;

	printf("유형을 선택하시오. (a/b)\n");
	scanf("%c", &type);

	printf("점수를 입력하시오.\n");
	scanf("%d", &score);

	if (type == 'a'){
		if (score >= 80)
			printf("a형 %d점 합격\n", score);
		else
			printf("a형 %d점 불합격\n", score);
		}

	else if (type == 'b'){
		if (score >= 60)
			printf("b형 %d점 합격\n", score);
		else
			printf("b형 %d점 불합격\n", score);
		}

	return 0;
}
