#include <stdio.h>
#include <string.h>

//문자열에서 배운 친구들이 정수형에서도 적용되는지 실험해봅시다  
int main(void){
	
	int array[10];
	gets(array);
	
	printf("%s\n", array);
	printf("%d", strlen(array));
	 
	
	return 0;
} //성공!  
