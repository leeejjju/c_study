#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//랜덤함수를 활용하여 가위바위보를 만드시오 (입출력 활용) 


int main(void){
	
	int userCard;
		
	printf("가위 바위 보! 당신의 결정을 입력해주세요\n");
	printf("가위: 0, 바위: 1, 보: 2\n");
	scanf("%d", &userCard);
	
	srand((unsigned int)time(NULL));
	int computerCard = rand() % 3;
	
	printf("상대방 : %d\n\n", computerCard);
	 
	
	if(userCard == computerCard){ 
	
		printf("비겼습니다~");
		
	}else if(userCard > computerCard){ 
		
		if(userCard == 2){
				if(computerCard == 0){
				printf("졌습니다...");
			}else{
				printf("승리했습니다!");
			}
		}else{
			printf("승리했습니다!");
		}
				
	}else if(userCard < computerCard){ 
		
		if(userCard == 0){
				if(computerCard == 2){
				printf("승리했습니다!");
			}else{
				printf("졌습니다...");
			}
		}else{
			printf("졌습니다...");
		}	
					
	}		
	return 0;
}
