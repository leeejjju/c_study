#include <stdio.h>
#include <string.h>

//���� �Լ�  
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;	
}

//�Է¹��� �迭�� �����ϴ� �Լ�  
void bouble(int array[], int num){
	
	int i; //���ҿ� 
	int j; //�� ���ĵƴ��� �Ǻ���  
	int count= 0; //�Ǻ���2  
	
	while(1){ //����(count�� ��) �����ñ��� �Ʒ��� ������ ���ѹݺ������ݴϴ� 
	
	for(i = 1; i < num; i++){ //�� ������ ���������ϴ� for���Դϴ�.   
		if(array[i-1] > array[i]){
			swap(&array[i-1], &array[i]);
		}	
	}
	
	for(j = 1; j < num; j++){ //������ ���ĵǾ��� �˻��ϱ� ���� for���Դϴ�   
			if(array[j-1] < array[j]){ //�� ��Ʈ�ʰ� �˸��� ������ �����ִٸ� ī��Ʈ ����  
				count++;
			}else{ //�˸��� ���� ��Ʈ�ʰ� �ִٸ� ī��Ʈ �ߴ�, while���� ó������ �̵� 
				count = 0;
				continue;
			}
		
			if( (num-1) == count){ //�ѹ��� �ɸ��� �ʰ� ī��Ʈ�� �� �׿��ٸ� �Լ� ���� 
				break;
			}
		}
	}	
}


int main(void){
	
	int array[100];
	int num = strlen(array);
	gets(array); //���Ŀ� ���ڸ� �Է¹޽��ϴ�  
	
	
	printf("�Է��� ����: %s\n", array);
	bouble(array[100], num); //�����Լ��� ������� �����ϰ� 
	printf("���ĵ� ����: %s", array); //���ĵ� �迭�� ������ݴϴ�  
	
	return 0;
}
