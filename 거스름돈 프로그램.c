#include <stdio.h>

//�Լ��� �Ӹ��� �Լ��� �ϴ� ��ɿ� ���� ������ �ּ��� �޾Ƶμ���
//Ư���� �ݾ��� �޾Ƽ� ���� ���� �Ž��� ȭ���� ������ ���ϴ� �Լ�
int smallest(int number){
	
	int count = 0;
	while(number>= 50000){ //50000���� Ŭ������ �۾��������� �ݺ�  
		number -= 50000;
		count++;
	}
	while(number>= 10000){  //10000���� Ŭ������ �۾��������� �ݺ� 
		number -= 10000;
		count++;
	}
	while(number>= 5000){ //5000���� Ŭ������ �۾��������� �ݺ� 
		number -= 5000;
		count++;
	}
	while(number>= 1000){ //1000���� Ŭ������ �۾��������� �ݺ� ... 
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
	return count; //count = �ش� �ݾ��� ���� �� �ִ� ���� ���� ȭ���� ����  
}

int main(void){
	
	int number;
	printf("�ݾ��� �Է��ϼ���:");
	scanf("%d", &number);
	printf("�ּҷ� �� �� �ִ� ȭ���� ������ %d���Դϴ�.\n", smallest(number)); 
	
	return 0;
}
