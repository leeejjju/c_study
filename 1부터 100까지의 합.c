#include <stdio.h>

int main(void){
	
	int i=1, sum=0; //sum은 1부터 100까지의 합 자체를 의미 
	while(i <=1000){
		sum= sum+i;
		i++ ;
	} 
	printf("1부터 100까지의 합은 %d입니다", sum);
	return 0;
}
