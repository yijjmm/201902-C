#include <stdio.h>

int main (void) {

	int score, grade;

	printf("점수 : ");
	scanf("%d", &score);

	grade = score >= 90;

	if (grade == 1)
		printf("결과 : %d, 합격\n", grade);
	else
		printf("결과 : %d, 불합격\n", grade);

	return 0;

}
