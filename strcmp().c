#include <stdio.h> 
#include <string.h>

int main(void){
	
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("���ڿ� ��: %d\n", strcmp(inputOne, inputTwo)); //�� ���ڿ��� ���������� ���� ������ ���� �� 
	//������ �������� �տ� �ִٸ� -1, �ڶ�� 1, �����ϸ� 0�� ��µ�  
	//�����̳� ���ܾ� �ϱ��� ���� ���α׷��� Ȱ��˴ϴ�. 
	return 0;
}
