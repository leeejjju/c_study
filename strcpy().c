#include <stdio.h>
#include <string.h>

int main(void){
	
	char input[10] = "I love you";
	char result[5] = "Love";
	strcpy(result, input); //���� ���ڿ��� ���� ���ڿ��� ī��  
	//���������� ���� ���� �����͸� �ٷ�, �Ҵ�� ���ڰ� �� ���� �ص� ���� ���� ����
	//�����ϰ� ������ �� ���ڿ��� ����, ���� ���� 
	
	printf("���ڿ� ���� : %s\n", result );
	return 0;
}
