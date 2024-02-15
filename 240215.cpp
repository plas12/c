#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(int argc, char *argv[]) {
int i = 0;
int j = 0;
int a = 5;
int b = 2;
int c = 0;

for(i = 0; i < 5; i++){
	for(j = 0; j < 5; j++){
		c++;
		COORD pos = {a, b};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", c);
		a = a + 3;
		Sleep(250);
	}
	a = 5;
	b = b + 2;
}
	
a = 5;
b = 20;
c = 0;

for(i = 0; i < 5; i++){
	for(j = 0; j < 5; j++){
		c++;
		COORD pos = {a, b};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", c);
		b = b + 2;
		Sleep(250);
	}
	a = a + 3;
	b = 20;
}

//a = 5;
//b = 35;
//c = 0;
//int d = 0; 
//int e = 0;
//
//for(i = 0; i < 9; i++){
//	for(j = 0; j < e%`; j++){
//		if(d == 0){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			a = a + 3;
//			Sleep(250);
//		}
//		if(d == 1){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			b = b + 2;
//			Sleep(250);
//		}
//		if(d == 2){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			a = a - 3;
//			Sleep(250);
//		}
//		if(d == 3){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			b = b - 2;
//			Sleep(250);
//		}
//		if(d == 4){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			a = a + 3;
//			Sleep(250);
//		}
//		if(d == 5){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			b = b + 2;
//			Sleep(250);
//		}
//		if(d == 6){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			a = a - 3;
//			Sleep(250);
//		}
//		if(d == 7){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			b = b - 2;
//			Sleep(250);
//		}
//		if(d == 8){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			a = a + 3;
//			Sleep(250);
//		}
//		if(d == 9){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			b = b - 2;
//			Sleep(250);
//		}
//		if(d == 9){
//			c++;
//			COORD pos = {a, b};
//			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//			printf("%d", c);
//			a = a + 3;
//			Sleep(250);
//		}
//	}
//	if(d % 4 == 0){
//		a = a - 3;
//	}
//	if(d % 4 == 1){
//		b = b - 2;
//	}
//	if(d % 4 == 2){
//		a = a - 3;
//	}
//	if(d % 4 == 3){
//		b = b + 2;
//	}
//	d++;
//	e++;
//}


/*
8
char ar[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
char a;
char b;
int i;
int d = 12;
int e = 40;

scanf("%c", &a);

for(i = 0; i <9; i++){
	if(a == 'R'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		e++;
		printf("%c", ar[i]);
		Sleep(1000);
	}
	if(a == 'L'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		e--;
		printf("%c", ar[i]);
		Sleep(1000);
	}
	if(a == 'U'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		d--;
		printf("%c", ar[i]);
		Sleep(1000);
	}
	if(a ==  'D'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		d++;
		printf("%c", ar[i]);
		Sleep(1000);
	}
}


7
int ar[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char a;
char b;
int i;
int d = 12;
int e = 40;

scanf("%c", &a);

for(i = 0; i <10; i++){
	if(a == 'R'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		e++;
		printf("%d", ar[i]);
		Sleep(1000);
	}
	if(a == 'L'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		e--;
		printf("%d", ar[i]);
		Sleep(1000);
	}
	if(a == 'U'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		d--;
		printf("%d", ar[i]);
		Sleep(1000);
	}
	if(a ==  'D'){
		COORD pos = {e, d};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		d++;
		printf("%d", ar[i]);
		Sleep(1000);
	}
}


6
char a = '0';
int b;
int c;
int d;
int i = 0;

scanf("%c", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);

for(i = 0; i < d; i ++){
	b++;
	COORD pos = {b, c};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", a);
	Sleep(1000);
}


5
char a = '0';
int b;
int c;
int i = 0;

scanf("%c", &a);
scanf("%d", &b);
scanf("%d", &c);

COORD pos = {b, c};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
printf("%c", a);
Sleep(1000);

for(i = 0; i < 9; i ++){
	b--;
	COORD pos = {b, c};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%c", a);
	Sleep(1000);
}


4
int i = 0;
int a = 10;

for(i = 0; i < 9; i++){
	COORD pos = {40, a};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	a--;
	printf("%d", a * 111);
	Sleep(1000);
}


3
int a = 0;
int b = 40;

do{
b = b - 3;
	COORD pos = {b, 0};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	a++;
	printf("%d", (10 - a) * 111);
	Sleep(1000);
}while(a < 9);


2
int a = 0;

COORD pos = {1, 0};

while(a != 10){
	COORD pos = {40, a};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	a++;
	printf("%d", a * 10);
	Sleep(1000);
}


1
int i =0;
	
COORD pos ={20, 4};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
for(i = 1; i <= 10; i++){
	printf("%d", i * 10);
	Sleep(1000);
}
*/

	return 0;
}
