#include <stdio.h>

void Call();
int main(void){
	int i;
	for (i=0; i<5; i++)
		Call();

	return 0;
}

void Call()
{
	static int count = 1;
	int num = 1;
	printf("%d번째 호출되었습니다.\n", count++);
	printf("Number 값은 %d입니다.\n\n", num++);
}
