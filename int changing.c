#include<stdio.h>

int main(void){
	int x = 100;
	printf("10진수로 출력: %d\n",x);
	printf("8진수로 출력: %o\n",x);
	//8진법: 0 1 2 3 4 5 6 7 10 11 12 ->0~7까지의 여덟 숫자로 모든 수를 표현하는 숫자체계.
	printf("16진수로 출력: %x\n",x); 
	return 0; 
}
