#include <stdio.h>

/* 이차원 배열의 상삼각, 하삼각 합을 구하는 문제 */ 

int main(void){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //3x3배열 초기화 
	int i,j;
	int up_sum=0, un_sum=0; //상삼각 합, 하삼각 합 
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
			
			if(i<=j){ //행 수(i)가 열 수(j)보다 작거나 같을 때 
				up_sum+=a[i][j];}
			
			if(i>=j){ //행수(i)가 열 수(j)보다 크거나 같을 때 
				un_sum += a[i][j];}
		}
		printf("\n");
	}
	
	printf("행렬의 상삼각요소들의 합은 %d, 하삼각 요소들의 합은%d이다.\n",up_sum, un_sum);
	
	return 0;
}
