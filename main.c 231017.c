#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a = 12;
	int b = 3;
	
	a -= b++;
	printf("a = %d b = %d\n", a, b);
	a /= --b;
	printf("a = %d b = %d\n", a, b);
	a += b++;
	printf("a = %d b = %d\n", a, b);
	a %= ++b;
	printf("a = %d b = %d\n", a, b);
	a += --b;
	printf("a = %d b = %d\n", a, b);
	
	/*
	int num = 3;
	
	printf("%d\n", num -= 1);
	printf("%d\n", --num);
	printf("%d\n", num--);
	printf("%d\n", num);
	
	int a;
	int b;
	
	
	a = 10;
	b = a++;
	
	printf("a = %d b = %d\n", a, b);  // a = 11 b = 10
	b = ++a;
	printf("a = %d b = %d\n", a, b); // a = 12 b = 12
	
	a = 20;
	b = a--;
	printf("a = %d b = %d\n", a, b); // a = 19 b == 20
	b = --a;
	printf("a = %d b = %d\n", a, b); // a = 18 b = 18
	
	
	int a = 10;
	int b = 2;
	
	a -= b;
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	--a;
	printf("a = %d\n", a);
	a %= b;
	printf("a = %d\n", a);
	a += b;
	printf("a = %d\n", a);
	++a;
	printf("a = %d\n", a);
	a /= b;
	printf("a = %d\n", a);
	
	
	int a = 20;
	
	a += 4;
	printf("a = %d\n", a);
	a /= 2;
	printf("a = %d\n", a);
	a -= 1;
	printf("a = %d\n", a);
	a *= 11;
	printf("a = %d\n", a);
	
	
	int num1 = 10;
	int num2 = 20;
	int num3 = ++num1 + num2++;
	
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);
	
	
	int a = 10;
	
	a++;
	a++;
	printf("a = %d\n", a);
	++a;
	++a;
	printf("a = %d\n", a);
	
	a = 10;
	
	a--;
	printf("a = %d\n", a);
	--a;
	printf("a = %d\n", a);
	
	
	int a, b;
	
	a = 20;
	b = 5;
	
	a += b; - 
	printf("a = %d\n", a);
	a *= b;
	printf("a = %d\n", a);
	a -= b;
	printf("a = %d\n", a);
	a /= b;
	printf("a = %d\n", a);
	a %= b;
	printf("a = %d\n", a);
	
	
	a += b - a = a + b
	a -= b - a = a - b
	a *= b - a = a * b
	a /= b - a = a / b
	
	a ++ - a = a + 1  	++의 순서의 따라 계산의 순서가 달라짐
	a -- - a = a - 1  	++의 순서의 따라 계산의 순서가 달라짐
	
	
	*/
	return 0;
}
