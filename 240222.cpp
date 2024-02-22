#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mygets(char str[]);
void myputs(char a[]);



int main(int argc, char *argv[]) {
	char *a = (char*)malloc(sizeof(char)*60);
	mygets(a);
	myputs(a);
	
	/*
	4 
	char *a = (char*)malloc(sizeof(char));
	int c;
	
	gets(a);
	c = strlen(a);
	char *b = (char*)malloc(sizeof(char) * c);
	
	strcpy(b, a);//  strcpy(a, b);  =>a 에다가 b를 대입한다. 
	printf("%s", b);
	
	free(a);
	free(b);
	
	
	3
	int a;
	int i;
	
	scanf("%d", &a);
	
	double *b;
	b = (double*)malloc(sizeof(int) * a);
	
	srand(time(NULL));
	for(i = 0; i < a; i++){
		scanf("%lf", &b[i]);
	} 
	printf("\n");
	for(i = 0; i < a; i++){
		printf("%lf", b[i]);
	} 
	free(b);
	
	
	2
	int a;
	int i;
	
	scanf("%d", &a);
	
	int *b;
	b = (int*)malloc(sizeof(int) * a);
	
	srand(time(NULL));
	for(i = 0; i < a; i++){
		b[i] = rand() % 10;
		printf("%d ", b[i]);
	} 
	free(b);
	
	
	1
	double *dou = (double*)malloc(sizeof(int) * 1);
	char *cha = (char*)malloc(sizeof(int) * 1);
	
	dou[0] = 3.141592;
	cha[0] = 'A';
	
	printf("%lf %c", dou[0], cha[0]);
	free(dou);
	free(cha);
	*/
	return 0;
}


void mygets(char str[]){
	gets(str);
	

//	return str;
}

void myputs(char a[]){
	int i; 
	int b = sizeof(a);
	puts(a);
//	return a;
}
