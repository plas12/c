#include <stdio.h>
#include <stdlib.h>
#include "MenuModule.h"//이런식으로 헤더파일 제작한것 사용 
#define ERROR "입력오류\n "

int a = 0;
int b1 = 0; 
int b2 = 0;
double c1 = 0.0;
double c2 = 0.0;

void Intsum();
//void Intsub();
//void IntMul();
//void IntDiv();
int IntPutData();
int dublePutData();

int main(int argc, char *argv[]) {
	int menu = 0;
	int subm = 0;
	int nn = 0;
	int mm1 = 0;
	int mm2 = 0;
	
	menu = MainMenu(nn);
	while(menu != 3){
		switch(menu){
			case 1:	
		
			a = 1;
			Intmenu(mm1);
			switch(mm1){
				case 1: Intsum(); break;
//				case 2: Intsub(); break;
//				case 3: IntMul(); break;
//				case 4: IntDiv(); break;
				case 5: break;
				default: printf(ERROR);
			}
		
			case 2:
			
			a = 2;
			doublemenu(mm2);
			switch(mm2){
				case 1: Intsum(); break;
//				case 2: Intsub(); break;
//				case 3: IntMul(); break;
//				case 4: IntDiv(); break;
				case 5: break;
			default: printf(ERROR);
			}
		
			case 3:break;
			default :printf(ERROR);
		}
	}
	
	
	return 0;
}

void Intsum(){
	if(a == 1){
		printf("두개의 정수를 입력 : ");
		IntPutData();
		printf("%d + %d = %d", b1, b2, b1 + b2);
	}
	if(a == 2){
		printf("두개의 실수를 입력 : ");
		dublePutData();
		printf("%lf + %lf = %lf", c1, c2, c1 + c2);
	}
 	
}

void Intsub(){
	if(a == 1){
		printf("두개의 정수를 입력 : ");
		IntPutData();
		printf("%d - %d = %d", b1, b2, b1 - b2);
	}
	if(a == 2){
		printf("두개의 실수를 입력 : ");
		dublePutData();
		printf("%lf - %lf = %lf", c1, c2, c1 - c2);
	}

}

void IntMul(){
	if(a == 1){
		printf("두개의 정수를 입력 : ");
		IntPutData();
		printf("%d * %d = %d", b1, b2, b1 * b2);
	}
	if(a == 2){
		printf("두개의 실수를 입력 : ");
		dublePutData();
		printf("%lf * %lf = %lf", c1, c2, c1 * c2);
	}

}

void IntDiv(){
	if(a == 1){
		printf("두개의 정수를 입력 : ");
		IntPutData();
		printf("%d / %d = %d", b1, b2, b1 / b2);
	}
	if(a == 2){
		printf("두개의 실수를 입력 : ");
		dublePutData();
		printf("%lf / %lf = %lf", c1, c2, c1 / c2);
	}

}

int IntPutData(){
	scanf("%d %d", &b1 ,&b2);
}

int dublePutData(){
	scanf("%lf %lf", &c1 ,&c2);
}
