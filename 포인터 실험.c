#include <stdio.h>

 


int main(void){
	
	int x = 70;
	int *y = &x;
	printf("x가 저장된 위치는 %d\n", y);
	printf("x가 저장된 위치는 %d\n", &x);
	printf("x에 저장된 값은 %d\n", *y);
	
	*y = 80;
	printf("변경된 x의 값은 %d", x);
	
	return 0;
}
