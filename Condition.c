#include <stdio.h>
 
 int main(void){
 	
 	int x = -50, y = -30;
 	int absoluteX = (x>0) ? x : -x;
 	int max = (x>y)? x: y;
 	int min = (x<y)? x: y;
 	printf("x�� ������  %d\n", absoluteX);
 	printf("x�� y �� �ִ��� %d\n", max);
 	printf("x�� y �� �ּڰ��� %d\n", min ); 
 	return 0;
 } 
