#include <stdio.h>
//그냥 구구단 만들어보기(중첩반복문) 

int main(void){
	
	int i, j;
	int gugudan[10][10];
	for(i=1; i<= 9; i++ ){
		
		printf("\n [ %d단 ] \n\n", i);
		for(j=1; j<=9; j++){
			
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}
