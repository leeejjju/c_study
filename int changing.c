#include<stdio.h>

int main(void){
	int x = 100;
	printf("10������ ���: %d\n",x);
	printf("8������ ���: %o\n",x);
	//8����: 0 1 2 3 4 5 6 7 10 11 12 ->0~7������ ���� ���ڷ� ��� ���� ǥ���ϴ� ����ü��.
	printf("16������ ���: %x\n",x); 
	return 0; 
}
