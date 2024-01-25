#include <stdio.h>
#include <stdlib.h>
#include "MenuModule.h"//이런식으로 헤더파일 제작한것 사용 
#define ERROR "입력오류\n "


void Intsum();
void Intsub();
void IntMul();
void IntDiv();
int IntPutData();

int main(int argc, char *argv[]) {
	int menu = 0;
	int subm = 0;
	int n = 0;
	
	while(menu != 3){
		menu = MainMenu(n);
		switch(menu){
			case 1: Intsum(); break;
			case 2: Intsub(); break;
			case 3: IntMul(); break;
			case 4: IntDiv(); break;
			case 5: break;
			default: printf(ERROR);
		}
		break;
	}
	
	return 0;
}

void Intsum(){
	
}

void Intsub(){
	
}

void IntMul(){
	
}

void IntDiv(){
	
}

int IntPutData(){
	
}


