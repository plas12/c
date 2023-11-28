#include <stdio.h>
#include <stdlib.h>


int ReverseNum(int n);

int main(){
	int a;
	
	scanf("%d", &a);
	
	printf("%d", ReverseNum(a));
}

int ReverseNum(int n){
	for(int i = 1; i < n; i*10){
		int a = n % i;
		return a;
	} 
}


/*
void Divisor(int n);

int main(){
	int a = 0;
	
	scanf("%d", &a);
	
	Divisor(a);
	return 0;
}

void Divisor(int n){
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ", i);
		}
	}
}



int Sum(int n);

int main(){
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", Sum(a));
	
	return 0;
}

int Sum(int n){
	int a = 0;
	
	for(int i = 1; i <= n; i++){
		a = a + i;
	}
	return a;
}



int AbsoluteValue(int num1);

void main(){
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", AbsoluteValue(a));
}
int AbsoluteValue(int num1){
	if(num1 < 0){
		num1 = num1 * -1;
	}
	return num1;
}



--------------------------------------------
없는게 없는 경우 

int plus(int num1, int num2){
	return num1 + num2;
}

void main(){
	int a = 3;
	int b = 2;
	int num1 = plus(a, b);
	printf("%d\n", num1);
	
	num1 = plus(3, 5);
	printf("%d\n", num1);
	
	num1 = plus(3, 5);
	printf("%d\n", num1 + 10);
}



메개변수가 없는경우 

int plus(){
	int a = 3;
	int b = 2;
	
	return a + b;
}

void main(){
	int num = plus();
	
	printf("%d\n", num);
	printf("%d\n", plus());
	printf("%d\n", plus() + 10);
}



변화값이 없는 경우 

void plus(int num1, int num2)// 메체변수 {
	printf("%d\n", num1 + num2);
	
	// void는 메체 변수와 변환값이 없을때 사용한다 
	//return 0; 변화값 
}

void main(){
	int a = 3;
	int b = 2;
	
	plus(a, b);
	plus(5, 3);
}



메개 변수 와 변화값이 모두 없는 경우

void plus(){
int a = 3;
int b = 2;

printf("%d", a + b);
}

void main(){
plus();
}
*/
