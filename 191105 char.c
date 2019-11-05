#include <stdio.h>

int main(void){
	
	int i;
	char str[] = "abcd";
	printf("%s\n", str);
	for (i=0; str[i]!='\0'; i++){
		printf("%c", str[i]);
	}

	return 0;

}
