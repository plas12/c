#include <stdio.h>
#include <stdlib.h>

void printArray(int ar[]);
void inputdate(int *p);


int main(int argc, char *argv[]){
	int ar[5] = {0};
	
	printArray(ar);
	inputdate(ar);
	printArray(ar);


	/*
//	int a =100;
//	int b = 100;
//	int c = 100;
//	
//	printf("%d %d %d\n\n", &a, &b, &c ); 
	
	char *sp = "Hello string";
	char *name = "��ť���ڵ�";
	
	printf("%d %d\n", sp, "Hello string");
	printf("%d %d\n", name, "��ť���ڵ�");
	printf("%s %s\n", sp, "Hello string");
	printf("%s %s\n\n", name, "��ť���ڵ�");
	
//	char *sp1 = "Hello string";
//	char *sp2 = "Hello string";
//	char *sp3 = "Hello string";
//	
//	printf("%d %d %d", sp1, sp2, sp3);
	
	
	char str[] = "Hello string";
	char name[20] = "��ť���ڵ�";
	char *p, *q;
	
	p = str;
	q = name;
	
	printf("%d %d\n", str, name);
	printf("%s %s\n", str, name);
	
	
	int ar[3] = {1, 2, 3};
	int ar2[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	
	printf("%d\n", ar);
	printf("%d\n", &ar[0]);
	
	printf("%d\n", ar2);
	printf("%d\n", &ar2[0][0]);
	
	printf("%d\n", &ar2[1][0]);
	
	
	int ar[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	printf(" %d\n %d\n %d\n", ar[0], ar[1], ar[2]); // 2���� �迭 ar[0][0] : ar[0]==> ar[0][0]�� �ּҰ�  /  ar[1]==> ar[1][0]�� �ּҰ�  /   ar[2]==> ar[2][0]�� �ּҰ� 
	
	
	int ar[] = {11, 21, 31, 41 , 51, 61, 71};//*(ar + 0) == ���� ���� 
	int *p, *q, *r;
	
	p = ar;
	q = &ar[1];
	r = (ar+2);
	
	printf("%d %d\n", *p, ar[0]);
	printf("%d %d\n", *q, *(ar + 1));
	printf("%d %d\n", *r, ar[2]);
	printf("\n\n");
	
	for(int i = 0; i < (sizeof(ar) / sizeof(int)); i++){
		printf("%d\n", *(p + i));
	}
	
	/*
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int i;
	
	*(ar+0) = 34;
	*(ar+1) = 21;
	
	printf("%d %d\n", ar[0], *(ar+0));
	printf("%d %d\n", ar[1], *(ar+1));
	printf("%d %d\n", *(ar+2), *(ar+3));
	printf("\n\n");
	
	for(i = 0; i < 10; i++){
		printf("%d\n", *(ar + i));
	}
	
	
	int n, *p;
	
	p = &n;
	*p = 70;
	
	printf("%d %d", n, *p);
	
	
	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};//int = 4����Ʈ == > int �� 4ĭ ���� 
	int br[7];
	
	printf("�迭�� �̸� :  %d\n", ar);
	printf("�迭�� �̸� :  %d\n", ar + 1);
	printf("\n\n");
	
	printf("%d\n", ar[0]);
	printf("%d\n", ar + 0);
	printf("%d\n", &ar[0]);
	printf("%d\n", *(ar + 0));
	*/
	return 0;
}

void printArray(int ar[]){
	for(int i = 0; i < 5; i++){
		printf("%d ", ar[i]);
	}
	printf("\n");
}
void inputdate(int *p){
	for(int i = 0; i < 5; i++){
		scanf("%d", (p + i));//ar�� �ּҰ� (p + i)���� *�� �Ⱥ��� ������ *�� ���̸� �� ���� �� ���� ���� ��Ÿ���� ������ 
	}
	printf("\n");
}
