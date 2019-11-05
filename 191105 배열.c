#include <stdio.h>

int main(void){
	int a, b, c, d, e, i;
	//int sum = 0;
	//float avg;
	int multi = 1;

	printf("배열 5개를 입력하세요.\n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	int A[] = {a, b, c, d, e};

	for (i=0; i<5; i++){
		multi = multi * A[i];
	}

	//avg = sum / i;

	//printf("sum = %d\n", sum);
	//printf("avg = %.2f\n", avg);
	printf("multi = %d\n", multi);

	return 0;

}
