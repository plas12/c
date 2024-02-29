#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h> 
#include <time.h>

//void GotoXY(int x, int y);
//1

//void GotoXY(int x, int y);
//2

void GotoXY(int x, int y);
void LRkey(char key, int *x, int *y, int *a[5][30]);


int main(){
	int a[5][30]={{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
				  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
				  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
				  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
				  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
				};
	int y = 40, x = 15;
	char key = 0;
	
	do{
		GotoXY(x, y);
		y--;
		printf("бс");
		key = getch();
		LRkey(key, &x, &y, &a[5][30]);
		Sleep(500);
		system("cls");
	}while(key != 27);
	
	/*
	2
	int x = 0, y = 1, temp = 2, count = 0;
	
	while(count < 5){
		x += temp;
		if(x > 40){
			temp = -2;
		}
		if(x < 2){
			temp = 2;
			count++;
		}
		system("cls");
		GotoXY(x, y);
		printf("бс");
		Sleep(100);
	}
	printf("\n");
	
	
	1
	int x = 1, y = 0;
	int i;
	
	while(1){
		x+=2;
		srand(time(NULL));
		i = rand() % 3;
		system("cls");
		GotoXY(x, y);
		if(i == 0){
			printf("бс");
		}
		else if(i == 1){
			printf("б▄");
		}
		else if(i == 2){
			printf("бу");
		}
		if(x > 79){
			x = 1;
		}
		Sleep(1000);
	}
		
	printf("\n");
	*/
	return 0;
}

void GotoXY(int x, int y){
	COORD Pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void LRkey(char key, int *x, int *y, int *a[5][30]){
	if(*y <1){
		*a[y][x] = 1;
		*y = 40;
	}
	switch(key){
		case 75:
			*x = *x - 1;
			if(*x < 1){
				*x = 30;
			}
			break;
		case 77:
			*x = *x + 1;
			if(*x > 31){
				*x = 1;
			}
			break;	
	}
}


//2
//void GotoXY(int x, int y){
//	COORD Pos = {x, y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}


//1
//void GotoXY(int x, int y){
//	COORD Pos = {x, y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
