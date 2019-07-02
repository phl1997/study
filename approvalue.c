#include <stdio.h>

int main(void){
	int num[5]; //입력받을 정수배열 
	double gap[5]; //정수와 평균의 차를 저장한 배열선언 
	int sum=0; //num배열의 합 
	double ave, min_gap; //num배열 원소들의 평균, gap배열의 최소값
	
	int i,j,k,l; //반복문의 반복을위해 사용할 변수들 선언 
	
	printf("평균값과 근삿값을 구할 정수 5개를 공백으로 구분하여  입력하세요.\n");
	
	for(i=0; i<5; i++){
		scanf("%d",&num[i]);
		sum+=num[i];
	} 
	
	ave = (double)sum/(double)i; //평균구하기 
	
	printf("입력한 정수들의 평균값은 %.1lf 입니다.\n", ave);
	
	for(j=0; j<5; j++){ //gap배열에 num배열의 수들과 평균의 차이저장 
		gap[j]=(double)num[j]-ave;
		(gap[j]<0?gap[j]=-gap[j]:gap[j]=gap[j]); 
		//배열의 정수와 평균의 차이가 음수인 경우 절대값 적용 
	}
	
	min_gap=1000000; //평균과의 차이보다 큰 수 min_gap에 초기화
	for(k=0; k<5; k++){
		if(gap[k]<min_gap)//min_gap보다 작으면 min_gap에 값넣음 
			min_gap=gap[k];
		else
			continue;
	}
	
	for(l=0; l<5; l++){
		if(gap[l]==min_gap){ //min_gap의 값을 gap배열 중 찾아서 일치하면 
			printf("입력한 정수들 중 평균값에 가장 가까운 근삿값은 %d입니다.\n", num[l]);
			printf("근삿값 %d의 위치는 배열의 %d번째 입니다.\n",num[l],l+1);
		}
		else
			continue;
	}
	
	return 0;
}
