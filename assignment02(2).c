#include <stdio.h>

int bouble[5];
int i;
int k;
int bigger, smaller;
int count=1; 


/*void swap(int *x, int *y){
	
	int temp;
	temp = *x; //변수 temp에 '포인터 x가 가리키는 특정 위치의 값'을 넣어줍니다.  
	*x = *y;
	*y =  temp;
	
}*/ //포인터를 이용한 진또배기 swap함수입니다  
 
int swap(void){ //앞에서부터 뒤로 두 항씩 비교하며 스왑하는 함수  

	while(1){
		
  		//if(count>10){ //근데 이걸 몇번반복해야됨?
		//	break;
		//}
		
		/*
		for(i = 1; i < 6; i++ ){
				
			if(i == bouble[i]){
				k++;					
	 		}
	 		
	 		if(k > 4){
	 			break;
			 }
	 	} */
		
		
		for(i = 1; i < 5; i++ ){//for문이 다 실행되면 한줄 완료  
			
			smaller = bouble[i-1];
			bigger = bouble[i];
				
			if(bouble[i-1] > bouble[i]){
				bouble[i-1] = bigger;
				bouble[i] = smaller; //이 스왑방식이 맞나 싶네요 					
	 		}
	 		count++; //이게 몇번째 실행인지 카운트 (한줄 기준) 
		}
		i = 1;
			
	}

		
 return;
 }
 

int main(void){
	
	printf("배열에 숫자 다섯개를  삽입해주세요:\n");
 	scanf("%d %d %d %d %d", &bouble[0], &bouble[1], &bouble[2], &bouble[3], &bouble[4]);
	swap(); 
 	printf("정렬된 배열: %d %d %d %d %d", bouble[0], bouble[1], bouble[2], bouble[3], bouble[4]);
	
	return 0;
}

 
