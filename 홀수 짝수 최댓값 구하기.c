#include <stdio.h>
#define NUMBER 5
//�ټ����� ���� �߿��� ¦�� �ִ񰪰� Ȧ�� �ִ��� ���ϴ� ���α׷�  


int main(void){
	
	int array[NUMBER];
	int i, oddMax, evenMax;//Ȧ�� �ִ񰪰� ¦�� �ִ��� �ǹ���  
	oddMax=0;
	evenMax=0;
	
	for(i=0; i<NUMBER; i++){
		
		scanf("%d", &array[i]);
		
		if(array[i]%2 == 0){//¦����� 
			if(evenMax< array[i]){
				evenMax= array[i];
			}
		}else{//Ȧ����� 
		if(oddMax< array[i]){
				oddMax= array[i];
			}
		}
		
	}
	printf("Ȧ�� �ִ��� %d, ¦�� �ִ���  %d�Դϴ�.", oddMax, evenMax);
	return 0;
}
