#include <stdio.h>

int main(void){
	
	char input[1001];
	gets(input);//input이라는 배열 안에 사용자가 입력하는 문자열이 엔터를 칠때까지 입력됨  
	int count = 0;
	//HELLO를 넣으면 다섯번째 인덱스 값이 \0이 됨. 
	while(input[count] != '\0'){ //'\0' = null. c언어에서는 입력 후 남은 공간에 자동으로 null이 들어감.  
	
	count ++; 
	//null을 만날때까지 count를 증가시키겠다는 의미. 
	}
	printf("입력한 문자열의 길이는 %d입니다.\n", count); 
	printf("입력한 문자열은 %s입니다.", input); //%s는string, 하나의 문자열을 의미하는 c언어의 형식지정자  
	//%s도 null값이 보일때까지 문자들을 출력하는 내부구조를 지님 
	return 0;
}
