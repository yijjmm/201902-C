#include<stdio.h>

int main(void){

	int i, j, n;

	printf("n 이하의 소수\n");
	scanf("%d", &n);

	for (i=2; i<=n; i++){

		for (j=2; j<=i; j++){

			if (i % j == 0){
				break;
			}
		}
			
		if (i == j){
			printf("%d ", i);
		}
	}
	return 0;
}
