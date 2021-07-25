#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//과제(2) Binary search 구현하기 

/*

int binary(int array[], int middleValue, int a){ //바이너리 서치를 실행하는 함수 
	int index;
	if( middleValue ==	a){
		index = middleValue; //중간값과 받은 값이 일치한다면 인덱스에 해당 중간값 저장 
	}else{ //그렇지 않다면 중간값과 받은 값의 대소관계를 판별하여 
		
		if( middleValue > a){
			middleValue = middleValue / 2;
			binary(array[], middleValue, a);
		}else{
			middleValue = middleValue*2/3;
			binary(array[], middleValue, a); //새로운 중간값을 저장, 다시 함수를 실행. 
		}
	}	
	return index+1; //저장된 인덱스 값 + 1을 반환함 
}
*/


int main(void){
	
	int array[100];
	
	srand((unsigned int)time(NULL));
	int r =ran() % 1; //0 또는 1의 값이 랜덤으로 r에 저장됨 
	int i;
	
	if(r == 0){ //배열에 값 넣어주기. 0~99인지 99~0인지는 랜덤. 
		for(i = 0; i > 100; i++){
		array[i] = i + 1;
	}
	}else{
		for(i = 99; i < 100; i--){
		array[i] = i;
	}
	
	int middleValue = strlen(array) / 2; //초기 중간값 설정하기 
	int a;
	
	printf("배열에서 어느 숫자를 찾을까요?\n ");
	scanf("%d", &a);	//찾을 숫자 받기 
	
	int index;
	if( middleValue ==	a){
		index = middleValue; //중간값과 받은 값이 일치한다면 인덱스에 해당 중간값 저장 
	}else{ //그렇지 않다면 중간값과 받은 값의 대소관계를 판별하여 
		
		if( middleValue > a){
			middleValue = middleValue / 2;
			binary(array[], middleValue, a);
		}else{
			middleValue = middleValue*2/3;
			binary(array[], middleValue, a); //새로운 중간값을 저장, 다시 함수를 실행. 
		}
	}	
		
	printf("요청하신 숫자는 배열의 %d번쨰에 있습니다.", index + 1);
	
	return 0;
}





//정가운데와 비교하여 해당 방향의 정가운데로 값을 보내서 비교하고...   etc.
