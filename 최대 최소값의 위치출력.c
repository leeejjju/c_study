#include <stdio.h>
#define NUMBER 5
#include <limits.h>


//�ټ����� ���� �߿��� �ִ񰪰� �ּڰ��� ��ġ�� ����ϴ� ���α׷�  
int main(void){
	
	int i, max, min, index; //index�� ��ġ�� �ǹ���  
	int array[NUMBER]; 
	//array[0]~array[4]: �� 5���� �� �� �ִ� ũ���� �迭 ���� 
	
	max=INT_MIN;
	min=INT_MAX;
	index=0;
	 
	 for(i=0; i<NUMBER; i++){
	 	
	 	scanf("%d", &array[i]);		
	 	if(max < array[i]){
	 		
	 		max = array[i]; //max�� �ش� ������ ���� �����ϰ� 
	 		index = i;//�� ������ ���°������ index�� ��������  
		 }	 
	 } //array �� ��� ������ �Է¹����� ���ÿ� Ȯ���Ͽ� ���� ū ���� max�� �־��־����ϴ�. 
	 printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index+1);
	 
	  for(i=0; i<NUMBER; i++){
	 	
	 	scanf("%d", &array[i]);		
	 	if(min> array[i]){
	 		
	 		min = array[i];
	 		index = i;
		 }	 
	 }	 
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.", min, index+1);
	return 0;
} 
