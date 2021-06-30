#include <stdio.h>

int main(void){
	
	int x=50, y=30;
	//x와 y가 같은 값을 가지고 있는가?
	// x=y -> x와 y가 같은  상황 그자체를 의미하죠
	// x==y -> true, x와 y가 같은 값을 가지고 있는 것. 
	printf("is x equal to y? -> %d\n", x == y);
	printf("is x different from y? -> %d\n", x != y);
	printf("is x greater than y? -> %d\n", x > y);
	printf("is x less than y? -> %d\n", x < y);
	printf("x에 y값을 넣으면?  -> %d\n", x = y);
	return 0;
}
