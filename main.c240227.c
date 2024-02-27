#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
//#define X_END 79
//#define Y_END 24
//3

#define X_END 79

//#define Y_END 24
//4

//void GotoXY(int x, int y);
//void Move_LeftRight_key(char chr, int *x, int *y);
//3

//void GotoXY1(int x, int y);
//void Move_LeftRight_key1(char chr, int *x, int *y, int i);
//4

void GotoXY(int x, int y);

int main(int argc, char *argv[]) {
	int x = 20, y = 2;
	int i, j;
	
	for(i = 1; i < 80; i++){
		if(j == 0){
			x++; 
		}
		if(j == 1){
			x--;
		}
		if(x < 1){
			x = X_END;
		}
		if(x > X_END){
			x = 0;
		}
		y++;
		srand(time(NULL));
		j = rand() % 2;
		
		GotoXY(x, y);
		printf("■");
		sleep(1);
	}
	printf("\n");
	
	/*
	4
	char key;
	int x = 20, y = 20, i = 0;
	
	do{
		srand(time(NULL));
		GotoXY1(x, y);
		printf("@");
		key = getch();
		Move_LeftRight_key1(key, &x, &y, i);
		
	}while(key != 27);
	
	
	3
	char key;
	int x = 0, y = 0;
	
	do{
		GotoXY(x, y);
		printf("@");
	
		key = getch();
		Move_LeftRight_key(key, &x, &y);
		system("cls");//콘솔의 초기화 
	}while(key != 27);
	
	
	2
//	unsigned변수는 원래 음수50 양수50 을 차지하는데 이걸 사용하면 양수100이 된다. 
	
	unsigned char ch;
	
	do{
		ch = getch();
		printf("%d %x : %c\n", ch, ch, ch);	
	}while(ch != 13); 
	
	/*
	1
	int ch1, ch2;
	
	ch1 = getch();
	ch2 = getch();
	printf("%d %d\n", ch1, ch2);
	printf("%X %X\n", ch1, ch2);
	*/
	return 0;
}

void GotoXY(int x, int y){
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//4
//void GotoXY1(int x, int y){
//	COORD Pos = {x, y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
//void Move_LeftRight_key1(char key, int *x, int *y, int i){
//	switch(key){
//		case 80:
//			*y = *y + 1;
//			i = rand() % 4;
//			if(i % 2 == 0){
//				*x = *x - 1;
//			}
//			if(i % 2 == 1){
//				*x = *x + 1;
//			}
//			if(*y > Y_END){
//				*y = 1;
//				system("cls");
//			}
//			break;
//		case 72:
//			*y = *y - 1;
//			if(i % 2 == 0){
//				*x = *x - 1;
//			}
//			if(i % 2 == 1){
//				*x = *x + 1;
//			}
//			if(*y < 1){
//				*y = Y_END;
//				system("cls");
//			}
//			break;
//		
//	}
//	
//}


//3
//void GotoXY(int x, int y){
//	COORD Pos = {x, y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
//void Move_LeftRight_key(char key, int *x, int *y){
//	switch(key){
//	case 75:
//		*x = *x - 1;
//		if(*x < 1){
//			*x = X_END;
//		}
//		break;
//	case 77:
//		*x = *x + 1;
//		if(*x > X_END){
//			*x = 0;
//		}
//		break;
//		case 80:
//			*y = *y + 1;
//			if(*y > Y_END){
//				*y = 1;
//			}
//			break;
//		case 72:
//			*y = *y - 1;
//			if(*y < 1){
//				*y = Y_END;
//			}
//			break;
//	}
//	
//}
