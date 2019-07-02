#include <stdio.h>

int main(void){
	int c, drink;
	int cash=0; //현재 금액
	
	printf("컴퓨터공학과 7조손호일, 유진웅, 박혜린\n");
	printf("자판기프로그램\n");
	printf("---------------------------\n");
	
	while(1){
		printf("넣을 현금 금액을 입력하세요.(100,500,1000중입력하고, 그만 넣으려면0 입력):");
		scanf("%d", &c);
		if(c==100 || c==500 || c==1000 || c==0 ){ //넣을현금을 100,500,1000원으로 한정,(0은 그만넣을때 경우 입력하는 수) 
			cash+=c; //넣는 금액 cash에 더하기 
			if(c==0) //0입력받을 경우 
				break; //while문 멈춤 
		}
		else{ 
		printf("옳은 화폐가아닙니다.(5000원,10000원은 투입불가)\n");
	}
	printf("현재 금액:%d\n",cash);
	} 
	
	while(1){
		printf("1.코코팜(500원) 2.커피(700원) 3.식혜(600원) 0.잔돈반환 \n");
		scanf("%d",&drink);
		switch(drink){
			case 1:
				if(cash>=500){
				cash-=500;
				printf("코코팜이  나왔습니다.\n");
				break; 
			}
				else{
					printf("잔액이 부족합니다.\n");
					break;}
			case 2:
				if(cash>=700){
				cash-=700;
				printf("커피가 나왔습니다. \n");
				break;}
				else{
					printf("잔액이 부족합니다.\n");
					break;}
			case 3:
				if(cash>=800){
				cash-=800;
				printf("식혜가 나왔습니다. \n");
				break;}
				else{
					printf("잔액이 부족합니다.\n");
					break;}
			case 0:
				printf("잔돈을 반환합니다:%d 원\n",cash);
				cash=0;
				break;
			default:
				printf("올바른 숫자를 입력해주세요.\n");
				break;
	}
	
		printf("남은 금액: %d \n", cash);
		
		if(cash<=0){
			printf("남은 잔액이 없습니다.\n");
			break;
		}
			
		
	}
	
	return 0;
} 
