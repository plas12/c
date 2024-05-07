#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//void inputdata(int *p);
//void printarray(int ar[]);
//int getmax(int *ar);
//int getmin(int *ar);
//void a(int *ar);
void a(float *ar);


int main(int argc, char *argv[]) {
	srand(time(NULL));
	float ar[10] = {0};
	
	a(ar);
	
	/*
	srand(time(NULL));
	int ar[100] = {0};
	
	a(ar);
	
	
	int ar[10] = {0};
	int max, min;
	int a, b;
	srand(time(NULL));
	
	inputdata(ar);
	printarray(ar);
	printf("\n\n");
	max = getmax(ar);
	printf("\n\n");
	min = getmin(ar);
	*/
	return 0;
}

void a(float *ar){
	int i;
	int a = 0;
	int b;
	int c = 100;
	int d;
	int e = 0;
	
	for(i = 0; i < 10; i++){
		*(ar + i) = (rand() % 900 + 100) * 0.1 ;
//		printf("%.1f ", *(ar + i));
		if(a < *(ar + i)){
			a = *(ar + i);
			b = i;
		}
		if(*(ar + i) < c){
			c = *(ar + i);
			d = i;
		}
	}
	
	//---------------
	e = *(ar + 9);
	*(ar + 9) = *(ar + b);
	*(ar + b) = e;
	//---------------
	e = 0;
	//---------------
	e = *(ar + 0);
	*(ar + 0) = *(ar + d);
	*(ar + d) = e;
	//---------------
	
	for(i = 0; i < 10; i++){
		printf("%.1f ", *(ar + i));
	}
}

/*
void a(int *ar){
	int ib = 0;
	int ia = 0;
	int i;
	int a = 0;
	int b[100] = {0};
	int c = 0;
	
	scanf("%d", &ia);
	scanf("%d\n\n", &ib);
	
	for(i = 0; i < 100; i++){
		*(ar + i) = rand() % 100 + 1;
		printf("%d ", *(ar + i));
		if(ia == *(ar + i)){
			a++;
		}
		if(ib == *(ar + i)){
			b[c] = i;
			c++;
		}
	}
	printf("\n\n%d\n%d", a, ia);
	printf("\n\n%d", ib);
	for(i = 0;  i < c; i++){
		printf("\n%d", b[i]);	
	}
}


void inputdata(int *p){
	int i;
	for(i = 0; i < 10; i++){
		*(p + i) = rand()%100+1;
	}
}
void printarray(int ar[]){
	int i;
	for(i = 0; i < 10; i++){
		printf("%2d ", *(ar + i));
	}
}
int getmax(int *ar){
	int i;
	int a = 0;
	for(i = 0; i < 10; i++){
		if(a < *(ar + i)){
			a = *(ar + i); 
		}
	}
	printf("%d", a);
}
int getmin(int *ar){
	int i;
	int b = 100;
	for(i = 0; i < 10; i++){
		if(b >*(ar + i)){
			b = *(ar + i);
		}
	}
	printf("%d", b);
}
*/
