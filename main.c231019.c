#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int n = 0 ;
	
	printf("%d\n", n);
	printf("%d\n", n += 3);
	printf("%d\n", n *= 0);
	printf("%d\n", n += 5);
	printf("%d\n", n ++);
	printf("%d\n", ++n);
	printf("%d\n", n %= 5);
	printf("%d\n", --n);
	printf("%d\n", n--);
	printf("%d\n", n);
	/*
		float a;
		float b;
		
		float c;
		
		scanf("%.2f %.2f", &a,&b);
		a = a - 10;
		b = b + 5;
//		scanf("%d\n", &b);
		c = b / (a * a);
		printf("%.2f", c);
	
	
	int num = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d", &num);
	
	c = num / 3600 ;
	b = (num - c * 3600) / 60;
	a = (num - c * 3600 - b * 60) % 60 ;
	
	printf("Ω√ : %d ∫– : %d √  : %d", c , b, a);
	
	
	int a = 100;
	
	a += 10;
	a += 10;
	a += 10;
	a /= 2;
	a /= 2;
	a -= 5;
	a -= 5;
	printf("%d\n", a);
	
	a = 50;
	
	a *= 10;
	a += 10;
	a *= 10;
	a -=5;
	a -=5;
	a /=2;
	printf("%d\n", a);
	
	
	
	int num1 = 7350;
	int num2 = 3507;
	
	printf("%d\n", num1 - num2);
	*/
	return 0;
}
