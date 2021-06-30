#include <stdio.h>
#define SECOND_PER_MINUTE 60
int main(void){
	
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	printf("%d second is %d minute %d second.", input, minute, second);
	//초를 받아서 몇분 몇초인지 알려주는 프로그램  
	return 0;
}

