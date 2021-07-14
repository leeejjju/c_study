#include <stdio.h> 
#include <string.h>

int main(void){
	
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교: %d\n", strcmp(inputOne, inputTwo)); //두 문자열을 사전에서의 수록 순서에 대해 비교 
	//왼쪽이 사전에서 앞에 있다면 -1, 뒤라면 1, 동일하면 0이 출력됨  
	//사전이나 영단어 암기장 등의 프로그램에 활용됩니다. 
	return 0;
}
