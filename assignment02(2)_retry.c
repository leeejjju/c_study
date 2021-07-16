#include <stdio.h>
#include <string.h>

//스왑 함수  
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;	
}

//입력받은 배열을 정렬하는 함수  
void bouble(int array[], int num){
	
	int i; //스왑용 
	int j; //다 정렬됐는지 판별용  
	int count= 0; //판별용2  
	
	while(1){ //조건(count의 수) 충족시까지 아래의 과정을 무한반복시켜줍니다 
	
	for(i = 1; i < num; i++){ //한 패턴을 버블정렬하는 for문입니다.   
		if(array[i-1] > array[i]){
			swap(&array[i-1], &array[i]);
		}	
	}
	
	for(j = 1; j < num; j++){ //완전히 정렬되었나 검사하기 위한 for문입니다   
			if(array[j-1] < array[j]){ //각 파트너가 알맞은 순서로 놓여있다면 카운트 증가  
				count++;
			}else{ //알맞지 않은 파트너가 있다면 카운트 중단, while문의 처음으로 이동 
				count = 0;
				continue;
			}
		
			if( (num-1) == count){ //한번도 걸리지 않고 카운트가 다 쌓였다면 함수 종료 
				break;
			}
		}
	}	
}


int main(void){
	
	int array[100];
	int num = strlen(array);
	gets(array); //정렬에 숫자를 입력받습니다  
	
	
	printf("입력한 수열: %s\n", array);
	bouble(array[100], num); //버블함수를 실행시켜 정렬하고 
	printf("정렬된 수열: %s", array); //정렬된 배열을 출력해줍니다  
	
	return 0;
}
