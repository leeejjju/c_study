#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//����(2) Binary search �����ϱ� 

/*

int binary(int array[], int middleValue, int a){ //���̳ʸ� ��ġ�� �����ϴ� �Լ� 
	int index;
	if( middleValue ==	a){
		index = middleValue; //�߰����� ���� ���� ��ġ�Ѵٸ� �ε����� �ش� �߰��� ���� 
	}else{ //�׷��� �ʴٸ� �߰����� ���� ���� ��Ұ��踦 �Ǻ��Ͽ� 
		
		if( middleValue > a){
			middleValue = middleValue / 2;
			binary(array[], middleValue, a);
		}else{
			middleValue = middleValue*2/3;
			binary(array[], middleValue, a); //���ο� �߰����� ����, �ٽ� �Լ��� ����. 
		}
	}	
	return index+1; //����� �ε��� �� + 1�� ��ȯ�� 
}
*/


int main(void){
	
	int array[100];
	
	srand((unsigned int)time(NULL));
	int r =ran() % 1; //0 �Ǵ� 1�� ���� �������� r�� ����� 
	int i;
	
	if(r == 0){ //�迭�� �� �־��ֱ�. 0~99���� 99~0������ ����. 
		for(i = 0; i > 100; i++){
		array[i] = i + 1;
	}
	}else{
		for(i = 99; i < 100; i--){
		array[i] = i;
	}
	
	int middleValue = strlen(array) / 2; //�ʱ� �߰��� �����ϱ� 
	int a;
	
	printf("�迭���� ��� ���ڸ� ã�����?\n ");
	scanf("%d", &a);	//ã�� ���� �ޱ� 
	
	int index;
	if( middleValue ==	a){
		index = middleValue; //�߰����� ���� ���� ��ġ�Ѵٸ� �ε����� �ش� �߰��� ���� 
	}else{ //�׷��� �ʴٸ� �߰����� ���� ���� ��Ұ��踦 �Ǻ��Ͽ� 
		
		if( middleValue > a){
			middleValue = middleValue / 2;
			binary(array[], middleValue, a);
		}else{
			middleValue = middleValue*2/3;
			binary(array[], middleValue, a); //���ο� �߰����� ����, �ٽ� �Լ��� ����. 
		}
	}	
		
	printf("��û�Ͻ� ���ڴ� �迭�� %d������ �ֽ��ϴ�.", index + 1);
	
	return 0;
}





//������� ���Ͽ� �ش� ������ ������� ���� ������ ���ϰ�...   etc.
