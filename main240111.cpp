#include <iostream>


/*
1
struct a{
	int a;
	int b;
	int q;
	int m;
};
1


2
struct a{
	int a;
	int b;
};
2
*/

struct olim{
	int a;
	char b[5];
	double c;
	int d;
};
//void b(double a[8]); 
int main(int argc, char** argv){
	struct olim a1;
	struct olim a2;
	struct olim a3;
	struct olim a4;
	struct olim a5;
	struct olim a6;
	struct olim a7;
	struct olim a8;
	
	struct olim list[8];
	list[0].a = 1;
	list[1].a = 2;
	list[2].a = 3;
	list[3].a = 4;
	list[4].a = 5;
	list[5].a = 6;
	list[6].a = 7;
	list[7].a = 8;
	
	list[0].b = ����;
	list[1].b = ����;
	list[2].b = ����;
	list[3].b = �ͽŰ�;
	list[4].b = ������;
	list[5].b = ��ũ��;
	list[6].b = ������;
	list[7].b = �̻���;
	
	list[0].c = 15.5;
	list[1].c = 15.4;
	list[2].c = 13.7;
	list[3].c = 16.5;
	list[4].c = 14.9;
	list[5].c = 15.1;
	list[6].c = 17.5;
	list[7].c = 13.9;
	
	list[0].d = 6;
	list[1].d = 5;
	list[2].d = 1;
	list[3].d = 7;
	list[4].d = 9;
	list[5].d = 4;
	list[6].d = 8;
	list[7].d = 2;
	
	for(int i = 0; i < 8; i++){
		printf("%d", *(list + i));
	}
//	struct olim list[8]={{1,����},{2,����},{3,����},{4,�ͽŰ�},{5,������},{6,��ũ��},{7,������},{8,�̻���}};
//	b(list.c);

	/*
	2
	struct a a1 = {};
	printf("���� �ӵ� : "); 
	scanf("%d", &a1.a);
	printf("\n");
	printf("���� �Ѱ� : ");
	scanf("%d", &a1.b);
	printf("\n");
	
	if(a1.a >= a1.b){
		printf("!����!  \n���Ӽ�ġ : +%d", a1.a - a1.b); 
	} 
2


1
	struct a a1 = {17, 5};
	
	a1.q = a1.a/a1.b;
	a1.m = a1.a%a1.b;
	
	printf("%d   %d", a1.q, a1.m);
	 
1
*/
	return 0;
}
//void a(double a[8]){
//	 *(a + 1) = 15.5;
//	 *(a + 2) = 15.4;
//	 *(a + 3) = 13.7;
//	 *(a + 4) = 16.5;
//	 *(a + 5) = 14.9;
//	 *(a + 6) = 15.1;
//	 *(a + 7) = 17.5;
//	 *(a + 8) = 13.9;
//}
