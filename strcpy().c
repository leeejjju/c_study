#include <stdio.h>
#include <string.h>

int main(void){
	
	char input[10] = "I love you";
	char result[5] = "Love";
	strcpy(result, input); //앞의 문자열에 뒤의 문자열을 카피  
	//내부적으로 문자 관련 포인터를 다룸, 할당된 글자가 더 적다 해도 전부 복사 가능
	//간편하고 빠르게 두 문자열을 복사, 교제 가능 
	
	printf("문자열 복사 : %s\n", result );
	return 0;
}
