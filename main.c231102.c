#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i;
	int a;
	int b;
	int c;
	
	scanf("%d", &a);
	
	for(i = 0; i < a; i++){
		if(i % 3 == 0){
			printf("%d ", i);
		}
		
	}
	printf("\n");
	
	scanf("%d", &a);
	for(i = 0; i < a; i++){
		if(i % 6 == 0){
			printf("%d ", i);
			b = b + 1;
			c = c + i;
		}
	
	}
	printf("\n");
	printf("%d\n ", b);
	printf("%d\n ", c);
	
	
	
	/*
	int i = 0;
	int a = 2;
	int b = 3;
	int c = 0;
	int d = 6;
	int e = 0;
	int f = 100;

	for(i = 0; i<10; i++){
		a = a * -1;
		printf("%d ", a);
	}
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("%d", i % 3 );
	}
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("%d", b - i % 3);
	}
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("%d ", i % 5 + 1 );
	}
	printf("\n");
	
	for(i = 0; i < 10; i++){
		d--;
		printf("%d ", d);
	}
	printf("\n");
	
	for(i = 0; i < 10; i++){
		printf("%d ", (10 - i) * (10 - i));
	}
	*/
	return 0;
}
