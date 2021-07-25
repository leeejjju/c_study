#include <stdio.h>
//과제(1) Linear search 구현하기 

/*int linear(int array[], int a){
	int i;
	int index;
	for(i = 0; i < 5; i++){
		if(array[i] == a){
			index = i;
			
		}
	}
	
//	return index + 1;
} */

int main(void){
	
	int array[5];
	int a, index;
	printf("다섯개의 숫자를 입력해주세요.\n");
	scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
	printf("어떤 숫자를 찾을까요?\n");
	scanf("%d", &a);
		
		
		int i;
	for(i = 0; i < 5; i++){
		if(array[i] == a){
			index = i;
			
		}
	}
	
	printf("%d는 배열의 %d번쨰에 위치해 있습니다.", a, index + 1);
	
	return 0;
}

//입력받은 배열을 앞에서부터 검사하여.. 어쩌구  
