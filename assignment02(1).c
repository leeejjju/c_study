#include <stdio.h>
//피보나치 수열을 출력해주는 프로그램을 작성하세요
//숫자 인풋을 넣으면 해당 순번의 수가 출력되는 로직
 
int i = 0;

int fibo(i){
	
	if(i == 0){
		return 0;
	}else if(i == 1){
		return 1;
	}else{
		i = fibo(i-1)+ fibo(i-2);
		return i;
	}

}


int main(void){
	
	printf("피보나치 수열의 몇번째 수를 출력할까요? :\n ");
	scanf("%d", &i);
	fibo(i);
	printf("수열의 %d번쨰 수는 %d입니다.", i, fibo(i));
	
	return 0;
}
