#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int input(int *a);
int swapdate(int *n, int *m);

//void Addnum(int a,int b);
//void Subnum(int *pa,int *pb);
//void Mulnum(int *pa,int *pb);
//void Divnum(int a,int b);

int main(int argc, char *argv[]) { 
int n,m;

input(&n);
input(&m);
printf("Before  : ");
pirntf("n = %d  m = %d\n", n, m);
swapdate(&n, &m);
printf("After  : ");
printf("n = %d  m = %d\n", n, m);


//int n, m, temp;
//
//n = input();
//m = input();
//printf("Before :  ");
//printf("n = %d  m = %d\n", n, m);
//temp = n;
//n = m;
//m = temp;
//printf("After :  ");
//printf("n = %d  m = %d\n", n, m);


//int n;	double m;
//	
//inputint(&n);
//inputdouble(&m);
//printint(&n);
//printdouble(&m);
//changeint(&n);
//changedouble(&m);

/*
	int a, b;
	int *pa = &a, *pb = &b;
	
	printf("정수입력 : ");
	scanf("%d %d", &a, &b);
	
	Addnum(a, b);
	Subnum(&a, &b);
	Mulnum(pa, pb);
	Divnum(*pa, *pb);
*/
return 0;
}

int input(int *a){
	printf("정수입력 :  ");
	scanf("%d", &a);
	
}
int swapdate(int *n, int *m){
	int i = 0;
	
	i = *n;
	*n = *m;
	*m = i;
}


//int input(){
//	int a;
//	
//	printf("정수입력 :  ");
//	scanf("%d", &a);
//	return a;
//}


//int inputint(int *n){
//	scanf("%d\n", n);
//}
//int inputdouble(double *m){
//	scanf("%f\n", m);
//}
//int printint(int *n){
//	printf("%d\n", *n);
//}
//int printdouble(double *m){
//	printf("%f\n", *m);
//}
//int changeint(int *pn){
//}
//int changedouble(double *pm){
//}


/*
void Addnum(int a,int b){
//	int i = 0;
//	int *a = &pa; int *b = &pb;
//	
//	i = *pa + *pb;
	printf("%d + %d = %d\n", a,b,a+b);
}
void Subnum(int *pa,int *pb){
	//int i = 0;
	
//	i = *pa - *pb;
	printf("%d - %d = %d\n", *pa, *pb, *pa - *pb);
}
void Mulnum(int *pa,int *pb){
//	int i =0;
//	
//	i = *pa * *pb;
	printf("%d * %d = %d\n", *pa, *pb, *pa * *pb);
}
void Divnum(int a,int b){
//	int i = 0;
//	
//	i = *pa / *pb;
	printf("%d / %d = %d", a, b, a / b);
}
*/
