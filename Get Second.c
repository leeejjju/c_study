#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void){
	
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d second is %d minute %d second.", input, minute, second);
	//�ʸ� �޾Ƽ� ��� �������� �˷��ִ� ���α׷�  
	return 0;
}

