#include <stdio.h>

int factorial(int n);
int main(void){
	int fact;
	fact = factorial(10);

	printf("10! : %d\n", fact);

	return 0;
}

int factorial(int n){
	if (n<=1)
		return(1);
	else
		return(n * factorial(n-1));
}
