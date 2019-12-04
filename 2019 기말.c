/* 양의 정수를 입력받아 세제곱근을 소수3자리까지 구하기 */

#include <stdio.h>

int main(){
float a, n;
scanf("%f", &n);

for (a=0; a<n; a+=0.001){
    if (a * a * a >= n){
        printf("%.3f", a - 0.001);
        break;
    }
}
return 0;
}
