#include <stdio.h>

int main()
{
	double grade;

	printf("1에서 1000 사이의 수를 입력하십시오.");
	scanf("%lf", &grade);
	printf("백분율은 %.3f%% 입니다.", grade/1000*100);

	return 0;
}
