#include <stdio.h>
#include <stdlib.h>
#include "MenuModule.h"//�̷������� ������� �����Ѱ� ��� 
#define ERROR "�Է¿���\n "

//������� ���۰��� #defineERROR�� �ִ� �� ���� INPUTDATA�� INT�� 

/*
5
//��ũ�� ��� (�빮�ڷ� ����)(#define)
#define MAX 10//MAX 10 �� MAX = 10 
#define PI 3.141592//PI�ȿ� 3.141592�� ���� 
#define C3C "��ť���ڵ�"
#define PRN printf
#define MACRO "## ��ũ�� ���##\n"
#define SUM(n, m) ((n) + (m))
#define SUB(s, b) ((s) - (b))
*/

/*
void PrintFun1(int m, int n);
void PrintFun2(int m, int n);
2


int ga;//��������(��� �Լ� �ȿ��� ��� ����) 
int gb;
	
void Sum();
void Difference();
3


void Ccube();
void Coding();
4
*/

void Intsum();
void Intsub();
void IntMul();
void IntDiv();
int IntPutData();

int main(int argc, char *argv[]) {
	int menu = 0;
	int subm = 0;
	
	while(menu != 3){
		menu = MainMenu();
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
	
	/*
	5
	PRN(MACRO);
	PRN("MAX = %d\n", MAX);
	PRN("PI = %lf\n", PI);
	PRN("C3C = %s\n", C3C);
	PRN("%d\n", SUM(3, 8));
	PRN("%lf\n", SUM(3.6, 8.34));
	PRN("%d\n", SUB(13,5));
	PRN("%lf\n", SUB(4.2, 3.4));
	
	
	4
	Ccube();
	Ccube();
	Ccube();
	Coding();
	Coding();
	Coding();
	
	
	3
	printf("������ 2�� �Է��ϼ��� : ");
	scanf("%d %d", &ga, &gb);
	Sum();
	Difference();
	
	
	2
	int m, n;
	
	m = 10;
	n = 30;
	
	printf("main before : m = %d n = %d\n", m, n);//m = 10, n =30;1
	PrintFun1(m, n);
	printf("main after : m = %d n = %d\n", m, n);//m = 110, n = 50;6(������ ���⿡ m = 10, n = 30)
	
	
	1
	int a, b;
	
	a = 12;
	b = 20;
	printf("a = %d, b = %d\n", a, b);
	
	{
		int a, c;//�������� : �� ������ ������ ������ ���������� �������. 
		
		a = 30;
		c = 50;
		printf("a = %d, b = %d, c = %d\n", a, b, c);//b�� ������ ������ ���� �������� b�� �����´�. 
		
		a = 30;
		b = 45;//���� ������ ������ �������� 
		c = 75;
	}
	
	printf("a = %d, b = %d\n", a, b);
	*/
	return 0;
}
/*
4
void Ccube(){
	int cnt = 0;
	
	cnt++;
	printf("%d ��ť��\n", cnt);
}

void Coding(){
	static int cnt = 0;//static�� �޾Ƴ����� ���������� ������� �� ������ �����ȴ�(����Ѵ�.). 
	
	cnt++;
	printf("%d �ڵ�\n", cnt);
}


3
void Sum(){
	printf("%d + %d = %d\n", ga, gb, ga + gb);
}

void Difference(){
	int diff;
	
	if(ga > gb){
		diff = ga - gb;
		printf("%d - %d = ", ga, gb);
	}
	else{
		diff = gb - ga;
		printf("%d - %d = ", gb, ga);
	}
	printf("%d ", diff);
}


2
void PrintFun1(int m, int n){
	printf("fun1 before : m = %d, n = %d\n", m, n);//m = 10, n =30;2
	m = m + 50;
	n = n + 10;
	PrintFun2(m, n);
	printf("fun1 after : m = %d n = %d\n", m, n);//m = 110, n = 50;5(������ ���⿡ m = 60, n = 40)
}

void PrintFun2(int m, int n){
	printf("fun2 before : m = %d n = %d\n", m, n);//m = 60, n = 40;3
	m = m + 50;
	n = n + 10;
	printf("fun2 after : m = %d n = %d\n", m, n);//m = 110, n = 50;4
}
*/
