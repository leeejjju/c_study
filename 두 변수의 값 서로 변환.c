#include <stdio.h>

//두 변수의 값을 서로 변환하는 포인터 함수  
void swap(int *x, int *y){
	
	int temp;
	temp = *x; //변수 temp에 '포인터 x가 가리키는 특정 위치의 값'을 넣어줍니다.  
	*x = *y;
	*y =  temp;
	
} /*포인터를 쓰지 않는다면 매개변수로 들어온 애들은 이 함수 내에서만 사용되기 때문에 
값을 변환하더라도 함수가 종료되면 메인함수에는 영향을 끼치지 못하게 됨. 
메인함수에는 이 함수를 사용했을 뿐, 이를 통해 x와 y값이 변하지는 않는다. 
*/

int main(void){
	
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d \ny = %d", x, y); 
	return 0;
}
