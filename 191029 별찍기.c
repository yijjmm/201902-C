#include<stdio.h>

int main(void){
	int i, j; //i는 행, j는 열

	for (i=1; i<6; i++){
		
		for (j=6; j>i; j--){
		
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

