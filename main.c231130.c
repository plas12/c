#include <stdio.h>
#include <stdlib.h>


int ReverseNum(int n){
	int i = 0;
	int ia = 0;
	int a = 0;
	int b = n;
	
	for(i = 1; i <= n * 1; i = i * 10){
		if(i != 1){
			a = b % i;
			b = b - a;
		}
	}
	return a;
}
int main(int argc, char *arge[]){
	int i = 0;
	int a = 0;
	
	scanf("%d", &a);
	
	for(i = 1; i <= a; i = i * 10){
	printf("%d", ReverseNum(a));
	}
	return 0;
}
/*


int DivisorCunt(int n){
	int i = 0;
	int a = 0;
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			a++;
		}
	}
	return a;
}
int main(int argc, char *arge[]){
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", DivisorCunt(a));
	
	return 0;
}



int DivisorSum(int n){
	int i = 0;
	int a = 0;
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			a = a + i;
		}
	}
	return a;
}
int main(int argc, char *arge[]){
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", DivisorSum(a));
	
	return 0;
}



int DigitNumber(int n){
	int i = 0;
	int a = 0;
	
	for(i = 1; i <= n; i = i * 10){
		a = i;
	}
	return a;
}
int main(int argc, char *arge[]){
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", DigitNumber(a));
	
	return 0;
}



void ShowSum(int a, int b){
	int i = 0;
	int c = 0;
	
	if(a < b){
		for(i = a; i <= b; i++){
			printf("%d\n", i);
			c = c + i;
		}
		printf("%d", c);
	}
	if(a > b){
		for(i = b; i <= a; i++){
			printf("%d\n", i);
			c = c + i;
		}
		printf("%d", c);
	}
	if(a == b){
		printf("%d", a);
	}
}
int main(int argc, char *arge[]){
	int a = 0;
	int b = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	ShowSum(a, b);
	
	return 0;
}



int power(int n){
	n = n * n;
	return n;
}

int main(int argc, char *argv[]) {
	int a = 0;
	
	scanf("%d", &a);
	
	printf("%d", power(a));
	return 0;
}
*/
