#include <stdio.h>

//함수의 머리에 함수가 하는 기능에 대한 간단한 주석을 달아두세요
//특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수
int smallest(int number){
	
	int count = 0;
	while(number>= 50000){ //50000보다 클때부터 작아질때까지 반복  
		number -= 50000;
		count++;
	}
	while(number>= 10000){  //10000보다 클때부터 작아질때까지 반복 
		number -= 10000;
		count++;
	}
	while(number>= 5000){ //5000보다 클때부터 작아질때까지 반복 
		number -= 5000;
		count++;
	}
	while(number>= 1000){ //1000보다 클때부터 작아질때까지 반복 ... 
		number -= 1000;
		count++;
	}
	while(number>= 500){ 
		number -= 500;
		count++;
	}
	while(number>= 100){ 
		number -= 100;
		count++;
	}
	while(number>= 50){ 
		number -= 50;
		count++;
	}
	while(number>= 10){ 
		number -= 10;
		count++;
	}
	return count; //count = 해당 금액을 만들 수 있는 가장 적은 화폐의 갯수  
}

int main(void){
	
	int number;
	printf("금액을 입력하세요:");
	scanf("%d", &number);
	printf("최소로 줄 수 있는 화폐의 개수는 %d개입니다.\n", smallest(number)); 
	
	return 0;
}
