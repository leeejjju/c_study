#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�����Լ��� Ȱ���Ͽ� ������������ ����ÿ� (����� Ȱ��) 


int main(void){
	
	int userCard;
		
	printf("���� ���� ��! ����� ������ �Է����ּ���\n");
	printf("����: 0, ����: 1, ��: 2\n");
	scanf("%d", &userCard);
	
	srand((unsigned int)time(NULL));
	int computerCard = rand() % 3;
	
	printf("���� : %d\n\n", computerCard);
	 
	
	if(userCard == computerCard){ 
	
		printf("�����ϴ�~");
		
	}else if(userCard > computerCard){ 
		
		if(userCard == 2){
				if(computerCard == 0){
				printf("�����ϴ�...");
			}else{
				printf("�¸��߽��ϴ�!");
			}
		}else{
			printf("�¸��߽��ϴ�!");
		}
				
	}else if(userCard < computerCard){ 
		
		if(userCard == 0){
				if(computerCard == 2){
				printf("�¸��߽��ϴ�!");
			}else{
				printf("�����ϴ�...");
			}
		}else{
			printf("�����ϴ�...");
		}	
					
	}		
	return 0;
}
