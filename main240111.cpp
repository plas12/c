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
	
	list[0].b = 돌고래;
	list[1].b = 범고래;
	list[2].b = 상괭이;
	list[3].b = 귀신고래;
	list[4].b = 수염고래;
	list[5].b = 밍크고래;
	list[6].b = 향유고래;
	list[7].b = 이빨고래;
	
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
//	struct olim list[8]={{1,돌고래},{2,범고래},{3,상괭이},{4,귀신고래},{5,수염고래},{6,밍크고래},{7,향유고래},{8,이빨고래}};
//	b(list.c);

	/*
	2
	struct a a1 = {};
	printf("현재 속도 : "); 
	scanf("%d", &a1.a);
	printf("\n");
	printf("과속 한계 : ");
	scanf("%d", &a1.b);
	printf("\n");
	
	if(a1.a >= a1.b){
		printf("!과속!  \n과속수치 : +%d", a1.a - a1.b); 
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
