#include <stdio.h>

//조합: nCr은 r이 0이거나 n이라면 1이며, 그렇지 않은 경우 nCr(n-1, r-1)+nCr(n-1, r)와 같다.  

int nCr(int n, int r) {
	
	if(r==0|| r==n){
		return 1;
	}else{
		return nCr(n-1, r-1)+ nCr(n-1, r);
	}
}

int main(void){
	
	int n, r;
	printf("조합을 구하는 프로그램입니다.\n");
	printf("nCr의 n과 r을 입력해주세요.\n");
	scanf("%d, %d", &n, &r);
	printf("도출 가능한 경우의 수는 %d가지입니다.", nCr(n, r));
	return 0;
}
