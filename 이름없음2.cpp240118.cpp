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
	
	printf("�� : ");
	scanf("%d", &b);
	printf("�� : ");
	scanf("%d", &c);
	printf("Ÿ�̸� : ");
	scanf("%d", &d);
	
	a = c + d;
	if(59 < a){
		b = b + a / 60;
		a = a % 60;
		
			if (23 < b){
			b = b %24;
		}
	}
	
	printf("����� �ð� : %d�� %d��", b, a);
	
	
	4
	FILE *a = fopen("dsaw.txt", "w");
	char b[10];
	int c;
	int d;
	
	printf("�̸� : ");
	scanf("%s", &b);
	printf("�뷮 : ");
	scanf("%d", &c);
	printf("���� : ");
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

	printf("�����Է� : ");
	n = getchar();
	printf("n = %d\n", n);
	
	printf("���ڿ� �Է� : ");
	res = gets(str1);
	printf("res = %d\n", res);
	
	printf("���� �Է� : ");
	n = scanf("%d", &num);
	printf("n = %d", n);
	*/
	return 0;
	}
