#include <stdio.h>
//�Ǻ���ġ ������ ������ִ� ���α׷��� �ۼ��ϼ���
//���� ��ǲ�� ������ �ش� ������ ���� ��µǴ� ����
 
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
	
	printf("�Ǻ���ġ ������ ���° ���� ����ұ��? :\n ");
	scanf("%d", &i);
	fibo(i);
	printf("������ %d���� ���� %d�Դϴ�.", i, fibo(i));
	
	return 0;
}
