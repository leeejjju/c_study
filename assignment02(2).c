#include <stdio.h>

int bouble[5];
int i;
int k;
int bigger, smaller;
int count=1; 


/*void swap(int *x, int *y){
	
	int temp;
	temp = *x; //���� temp�� '������ x�� ����Ű�� Ư�� ��ġ�� ��'�� �־��ݴϴ�.  
	*x = *y;
	*y =  temp;
	
}*/ //�����͸� �̿��� ���ǹ�� swap�Լ��Դϴ�  
 
int swap(void){ //�տ������� �ڷ� �� �׾� ���ϸ� �����ϴ� �Լ�  

	while(1){
		
  		//if(count>10){ //�ٵ� �̰� ����ݺ��ؾߵ�?
		//	break;
		//}
		
		/*
		for(i = 1; i < 6; i++ ){
				
			if(i == bouble[i]){
				k++;					
	 		}
	 		
	 		if(k > 4){
	 			break;
			 }
	 	} */
		
		
		for(i = 1; i < 5; i++ ){//for���� �� ����Ǹ� ���� �Ϸ�  
			
			smaller = bouble[i-1];
			bigger = bouble[i];
				
			if(bouble[i-1] > bouble[i]){
				bouble[i-1] = bigger;
				bouble[i] = smaller; //�� ���ҹ���� �³� �ͳ׿� 					
	 		}
	 		count++; //�̰� ���° �������� ī��Ʈ (���� ����) 
		}
		i = 1;
			
	}

		
 return;
 }
 

int main(void){
	
	printf("�迭�� ���� �ټ�����  �������ּ���:\n");
 	scanf("%d %d %d %d %d", &bouble[0], &bouble[1], &bouble[2], &bouble[3], &bouble[4]);
	swap(); 
 	printf("���ĵ� �迭: %d %d %d %d %d", bouble[0], bouble[1], bouble[2], bouble[3], bouble[4]);
	
	return 0;
}

 
