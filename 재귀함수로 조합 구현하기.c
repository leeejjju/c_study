#include <stdio.h>

//����: nCr�� r�� 0�̰ų� n�̶�� 1�̸�, �׷��� ���� ��� nCr(n-1, r-1)+nCr(n-1, r)�� ����.  

int nCr(int n, int r) {
	
	if(r==0|| r==n){
		return 1;
	}else{
		return nCr(n-1, r-1)+ nCr(n-1, r);
	}
}

int main(void){
	
	int n, r;
	printf("������ ���ϴ� ���α׷��Դϴ�.\n");
	printf("nCr�� n�� r�� �Է����ּ���.\n");
	scanf("%d, %d", &n, &r);
	printf("���� ������ ����� ���� %d�����Դϴ�.", nCr(n, r));
	return 0;
}
