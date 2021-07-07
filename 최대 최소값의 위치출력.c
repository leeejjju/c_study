#include <stdio.h>
#define NUMBER 5
#include <limits.h>


//다섯개의 정수 중에서 최댓값과 최솟값의 위치를 출력하는 프로그램  
int main(void){
	
	int i, max, min, index; //index는 위치를 의미함  
	int array[NUMBER]; 
	//array[0]~array[4]: 총 5개가 들어갈 수 있는 크기의 배열 선언 
	
	max=INT_MIN;
	min=INT_MAX;
	index=0;
	 
	 for(i=0; i<NUMBER; i++){
	 	
	 	scanf("%d", &array[i]);		
	 	if(max < array[i]){
	 		
	 		max = array[i]; //max에 해당 구간의 값을 저장하고 
	 		index = i;//그 구간이 몇번째인지도 index에 저장해줌  
		 }	 
	 } //array 속 모든 구간을 입력받음과 동시에 확인하여 가장 큰 값을 max에 넣어주었습니다. 
	 printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index+1);
	 
	  for(i=0; i<NUMBER; i++){
	 	
	 	scanf("%d", &array[i]);		
	 	if(min> array[i]){
	 		
	 		min = array[i];
	 		index = i;
		 }	 
	 }	 
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.", min, index+1);
	return 0;
} 
