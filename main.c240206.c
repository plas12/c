#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//4void Cursor(int x, int y);
//5void GotoXY(int x, int y);
void GotoXY(int x, int y);
void MyDelay(int d);

int main(int argc, char *argv[]) {
	int i;
	int s;
	
	printf("출력 속도 : ");
	scanf("%d", &s);
	for(i = 1; i <= 10; i++){
		GotoXY(40, i + 1);
		printf("%d", i);
		MyDelay(s);
	}
	
	/*
	5
	int i;
	int j;
	
	do{
		GotoXY(0, 0);
		printf("%d", i);
		sleep(1);
		i++;
	}while(1);
	
	
	4
	int x, y;
	COORD pos;
	
	do{
		Cursor(0, 0);
		printf("커서의 위치를 입력하세요 : ");
		scanf("%d %d", &x, &y);
		Cursor(x, y);
		printf("a");
	}while(pos.X <= 80 && pos.Y <= 24); 
	
	
	3
	int x, y;
	COORD pos;
	
	do{
		pos.X = 1;
		pos.Y = 0;
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//		system("cls");다른 방법 
		
		printf("커서의 위치를 입력하세요 : ");
		scanf("%d %d", &pos.X, &pos.Y);
		
		pos.X = pos.X - 1;
//		system("cls"); 다른 방법 
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		
		printf("▣");
//		getch(); 다른 방법 
	}while(pos.X <= 80 && pos.Y <= 24); 
	
	
	2
	int x, y;
	COORD pos = {1,0};

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	getch();
	 
	 
	1
	int x, y;
	COORD pos = { 40,12};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("Hello C3coding");
	_getch();
	*/
	
	return 0;
}


void GotoXY(int x, int y){
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void MyDelay(int d){
	sleep(d);
}

/*
5
void GotoXY(int x, int y){
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


4
void Cursor(int x, int y){
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
*/

