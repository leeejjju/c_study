#include <stdio.h>

int main(void){
	
	int x=50, y=30;
	//x�� y�� ���� ���� ������ �ִ°�?
	// x=y -> x�� y�� ����  ��Ȳ ����ü�� �ǹ�����
	// x==y -> true, x�� y�� ���� ���� ������ �ִ� ��. 
	printf("is x equal to y? -> %d\n", x == y);
	printf("is x different from y? -> %d\n", x != y);
	printf("is x greater than y? -> %d\n", x > y);
	printf("is x less than y? -> %d\n", x < y);
	printf("x�� y���� ������?  -> %d\n", x = y);
	return 0;
}
