#include <stdio.h>

int main(void){
	
	int a;
	long b;
	short c;
	float d;
	double e;
	char f;
	
	printf("a의 데이터 타입 사이즈는 %d입니다.\n", sizeof(a));
	printf("b의 데이터 타입 사이즈는 %d입니다.\n", sizeof(b));
	printf("c의 데이터 타입 사이즈는 %d입니다.\n", sizeof(c));
	printf("d의 데이터 타입 사이즈는 %d입니다.\n", sizeof(d));
	printf("e의 데이터 타입 사이즈는 %d입니다.\n", sizeof(e));
	printf("f의 데이터 타입 사이즈는 %d입니다.\n", sizeof(f));
	
	return 0;
}
