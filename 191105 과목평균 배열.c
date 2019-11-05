#include <stdio.h>

int main(void){

	int i, j, sum = 0;
	int a[][3] = {{90, 80, 90}, {70, 100, 100}, {80, 90, 90}};

	double C[3];

	for(j=0; j<3; j++){
		for(i=0; i<3; i++){
			sum += a[i][j];
		}

		C[j] = (double)sum / i;

		if(j==0)
			printf("A과목 평균 %.2lf\n", C[j]);
		else if(j==1)
			printf("B과목 평균 %.2lf\n", C[j]);
		else if(j==2)
			printf("C과목 평균 %.2lf\n", C[j]);
		
		sum = 0; //다음 과목 평균 초기화
	}
	return 0;

}
