#include <stdio.h>

int factorial(int n);
int main(void){
	int fact, n;
	
	scanf("%d", &n);

	fact = factorial(n);

	printf("%d! : %d\n", n, fact);

	return 0;
}

int factorial(int n){
	if (n<=1)
		return(1);
	else
		return(n * factorial(n-1));
}
