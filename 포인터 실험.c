#include <stdio.h>

 


int main(void){
	
	int x = 70;
	int *y = &x;
	printf("x�� ����� ��ġ�� %d\n", y);
	printf("x�� ����� ��ġ�� %d\n", &x);
	printf("x�� ����� ���� %d\n", *y);
	
	*y = 80;
	printf("����� x�� ���� %d", x);
	
	return 0;
}
