#include <stdio.h>

int main (void) {
	
	char c = 'a';
	int a = 10;
	double d = 5.0;

	printf("char size = %dbyte\n", sizeof(char));
	printf("int size = %dbyte\n", sizeof(int));
	printf("double size = %dbyte\n\n", sizeof(double));

	printf("변수 c의 크기 %dbyte\n", sizeof(c));
	printf("변수 a의 크기 %dbyte\n", sizeof(a));
	printf("변수 d의 크기 %dbyte\n", sizeof(d));
	return 0;
}
