#include <stdio.h>
//����(1) Linear search �����ϱ� 

/*int linear(int array[], int a){
	int i;
	int index;
	for(i = 0; i < 5; i++){
		if(array[i] == a){
			index = i;
			
		}
	}
	
//	return index + 1;
} */

int main(void){
	
	int array[5];
	int a, index;
	printf("�ټ����� ���ڸ� �Է����ּ���.\n");
	scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
	printf("� ���ڸ� ã�����?\n");
	scanf("%d", &a);
		
		
		int i;
	for(i = 0; i < 5; i++){
		if(array[i] == a){
			index = i;
			
		}
	}
	
	printf("%d�� �迭�� %d������ ��ġ�� �ֽ��ϴ�.", a, index + 1);
	
	return 0;
}

//�Է¹��� �迭�� �տ������� �˻��Ͽ�.. ��¼��  
