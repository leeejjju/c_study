#include <stdio.h>
#include <math.h>//pow(), abs() 등 수학 관련 연산 함수 포함한 라이브러리 

int main(void){
	
	double x = pow(2.0, 20.0);
	printf("2의 20제곱은 %.0f입니다.\n", x);
	return 0;
}
