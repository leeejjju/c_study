#include <stdio.h>

int main(void){
	
	char input[1001];
	gets(input);//input�̶�� �迭 �ȿ� ����ڰ� �Է��ϴ� ���ڿ��� ���͸� ĥ������ �Էµ�  
	int count = 0;
	//HELLO�� ������ �ټ���° �ε��� ���� \0�� ��. 
	while(input[count] != '\0'){ //'\0' = null. c������ �Է� �� ���� ������ �ڵ����� null�� ��.  
	
	count ++; 
	//null�� ���������� count�� ������Ű�ڴٴ� �ǹ�. 
	}
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n", count); 
	printf("�Է��� ���ڿ��� %s�Դϴ�.", input); //%s��string, �ϳ��� ���ڿ��� �ǹ��ϴ� c����� ����������  
	//%s�� null���� ���϶����� ���ڵ��� ����ϴ� ���α����� ���� 
	return 0;
}
