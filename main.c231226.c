#include <stdio.h>
#include <stdlib.h>

/* index - �迭�� ��ġ�� �˷���*/

//void add(int *num1, int *num2);
void Addnum(int pa,int pb);
void Subnum(int *pa,int *pb);
void Mulnum(int *pa,int *pb);
void Divnum(int pa,int, pb);

int main(int argc, char *argv[]) { 
	int n, m;
	int *pa = &n, *pb = &m;
	
	printf("�����Է� : ");
	scanf("%d %d", &n, pb);
	
	Addnum(a, b);
	Subnum(&a, &b);
	Mulnum(pa, pb);
	Divnum(*pa, *pb);

	/*
	int a, b;
	int add, sub, mul, div;
	int *pa, *pb;
	
	pa = &a;
	pb = &b;
	a = 30;
	b = 55;
	add = *pa + *pb;
	printf("add = %d\n", add);
	
	*pa = 9;
	*pb = 7;
	sub = *pa - *pb;
	printf("sub = %d\n", sub);
	
	*pa = 12;
	b = 3;
	mul = *pa * *pb;
	printf("mul = %d\n", mul);
	
	a = 45;
	*pb = 5;
	div = *pa / *pb;
	printf("diiv= %d\n", div);
-------------------------------------------------------
	
	int n;
	int *pn, *par;
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	n = 49;
	pn = &n;
	par = &ar[2];
	
	printf("%d %d %p %p\n", n, ar[2], pn, par);
	
	*pn = 59;
	*par = 33;
	//�� *pn�� n�� ����Ű�Ƿ� n ���� �ٲ�� 
	printf("%d %d\n", n, ar[2]);
	printf("%d %d\n", *pn, *par);

	
	int a;	double b;	char c;
	int *pa;	double *pb;	char *pc;
	
	a = 153;	b = 12.7; c = '3';
	pa = &a;	pb = &b;	pc = &c;
	
	printf("pa = %x pb = %x pc = %x\n", pa, pb, pc); // %x  %p == 16���� 
	printf("&a = %p &b = %p &c = %p\n", &a, &b, &c);
	
	printf("a = %d b = %lf c = %c\n", *pa, *pb, *pc);
	printf("*pa = %d *pb = %lf *pc = %c\n", *pa, *pb, *pc);//*pa == a�ּ���ġ�� ��

	
	int number1 = 5;
	int number2 = 10;
	
	add(&number1, &number2);
	
	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);
	
	
	int number1 = 5;
	int number2 = 10;
	
	add(number1, number2);
	
	printf("number1 = %d\n", number1);
	printf("number2 = %d\n", number2);
	
	
	char ch = 'A';
	char * pch;
	pch = &ch;
	
	printf("%p\n", pch);
	
	printf("%c\n", *pch);
	*/
	return 0;
}

/*void add(int *num1 , int *num2){
	//*num1 == num�� �ּ� ���� ���� ����Ѵٴ� �� 
	*num1 = *num1 + 10;
	*num2 = *num2 + 10;
}*/

