#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	srand(time(NULL));
	int a;
	int b[] = {};
	int c[] = {};
	int d;
	
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		b[i] = rand() % 7;
	}
	printf("--------------------");
	for(int i = 0; i < a; i++){
		scanf("%d", &c[i]);
	}
	
	for(int i = 0; i < a; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	for(int i = 0; i < a; i++){
		printf("%d ", c[i]);
		if(b[i] == c[i]){
			d++;
		}
	}
	printf("\n\n%d", d);
	
	/*
	5
	int a;
	int b;
	int c;
	int d;
	
	printf("시 : ");
	scanf("%d", &b);
	printf("분 : ");
	scanf("%d", &c);
	printf("타이머 : ");
	scanf("%d", &d);
	
	a = c + d;
	if(59 < a){
		b = b + a / 60;
		a = a % 60;
		
			if (23 < b){
			b = b %24;
		}
	}
	
	printf("사용후 시각 : %d시 %d분", b, a);
	
	
	4
	FILE *a = fopen("dsaw.txt", "w");
	char b[10];
	int c;
	int d;
	
	printf("이름 : ");
	scanf("%s", &b);
	printf("용량 : ");
	scanf("%d", &c);
	printf("가격 : ");
	scanf("%d", &d);
	
	fprintf(a, "name : ");
	fprintf(a, "%s\n", b);
	fprintf(a, "ml : ");
	fprintf(a, "%d\n", c);
	fprintf(a, "price : ");
	fprintf(a, "%d\n", d);
	
	fclose(a)
	
	
	3
	FILE *a = fopen("wasd.txt", "w");
	char b [35];
	
	scanf("%s", b);
	fprintf(a, "%s", &b);
	
	fclose(a);
	
	
	2
	FILE *a = fopen("asdf.txt", "w");
	char b;
	
	scanf("%c", &b);
	fputc(b, a);
	
	fclose(a) 
	
	
	1
	int n, num;
	char* res;
	char str1[20];

	printf("문자입력 : ");
	n = getchar();
	printf("n = %d\n", n);
	
	printf("문자열 입력 : ");
	res = gets(str1);
	printf("res = %d\n", res);
	
	printf("형식 입력 : ");
	n = scanf("%d", &num);
	printf("n = %d", n);
	*/
	return 0;
	}
