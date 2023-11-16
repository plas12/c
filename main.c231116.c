#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	
	scanf("%d", &a);
	for(i = a; i >= 0; i--){
		if(a % i == 0){
			printf("%d\n", i);
			b++;
			c = c + i;
		}
	}
	
	/*
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	
	scanf("%d", &a);
	for(i = a; i >= 0; i--){
		if(a % i == 0){
			printf("%d\n", i);
		}
	}
	
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	for(a = 0; a <=10; a++){
		if(a % 2 == 0){
			b = b + a;
		}
		else{
			c = c + a;
		}
	}
	
	printf("%d\n", b);
	printf("%d", c);
		
	
	int a = 0;
	int i = 0;
	int b = 0;
	int c = 0;
	int d = 0; 
	
	for(i = 0; i <4; i++){
		scanf("%d", &a);
		b = b + a;
	}
	c = b1 / 40.0;
	printf("%d", c);
	switch(c){
		case 10:
		case 9:
			printf("참 잘했어요");
			break;
		case 8:
			printf("잘했어요");
			break;
		case 7:
			printf("화이팅");
			break;
		default:
			printf("힘내요 할 수 있어요");
			break;
	}
	*/
	printf("%d\n", b);
	printf("%d", c);

}
