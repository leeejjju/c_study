#include <stdio.h>
#define NUMBER 5
//다섯개의 정수 중에서 짝수 최댓값과 홀수 최댓값을 구하는 프로그램  


int main(void){
	
	int array[NUMBER];
	int i, oddMax, evenMax;//홀수 최댓값과 짝수 최댓값을 의미함  
	oddMax=0;
	evenMax=0;
	
	for(i=0; i<NUMBER; i++){
		
		scanf("%d", &array[i]);
		
		if(array[i]%2 == 0){//짝수라면 
			if(evenMax< array[i]){
				evenMax= array[i];
			}
		}else{//홀수라면 
		if(oddMax< array[i]){
				oddMax= array[i];
			}
		}
		
	}
	printf("홀수 최댓값은 %d, 짝수 최댓값은  %d입니다.", oddMax, evenMax);
	return 0;
}
