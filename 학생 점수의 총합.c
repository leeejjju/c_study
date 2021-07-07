#include <stdio.h>
//학생 점수의 총합을 구하는 프로그램  

int main(void){
	
	int score[5][2]; //5는 학생의 수, 2는 각각 수학점수와 영어점수를 뜻함.  
	int total[2]= { 0, }; //1차원 배열 할당시 모든 데이터에 0을 넣는다.각 행의 index[0], index[1]=0
	int i;
	
	for(i=0; i<5; i++){
		
		printf("%d번 학생의 수학, 영어 점수:", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
	//}
	
	//for(i=0; i<5; i++){
		
		total[0] += score[i][0];
		total[1] += score[i][1];
	//}
}
	printf("\n\n 5명의 수학 점수 합계: %d\n", total[0]);
	printf(" 5명의 영어 점수 합계: %d\n", total[1]);
	return 0;
}
